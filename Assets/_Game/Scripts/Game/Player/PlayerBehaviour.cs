using Desire.Scripts.Game.Behaviours;
using Desire.Scripts.Game.Behaviours.Combat;
using Desire.Scripts.Game.Core;
using Desire.Channels;
using Desire.Scripts.Game.Inputs;
using Desire.Scripts.Game.Player.States;
using Desire.Game.StateMachine;
using UnityEngine;
using AlienWaves.CoreDI;

namespace Desire.Scripts.Game.Player
{
    public class PlayerBehaviour : BasePlayer
    {
        [SerializeField] private GameplayChannelSo gameplayChannelSo;

        [Header("Movement")]
        [SerializeField] private Transform blockPosition;
        [SerializeField] private Vector2 blockSize;

        [Header("Movement")]
        [SerializeField] private float movementSpeed = 5;
        [SerializeField] private float jumpForce = 5;
        [SerializeField] private float dashForce;
        [SerializeField] private float dashCooldown;
        [SerializeField] private float dashTime;

        [Header("Check Ground")]
        [SerializeField] private float checkRadius = 0.2f;
        [SerializeField] private Transform groundPosition;
        [SerializeField] private LayerMask groundLayer;
        
        [Header("Skin")]
        [SerializeField] private SpriteRenderer sprite;
        
        [Header("Combat")]
        [SerializeField] private Transform weaponTransform;
        [SerializeField] private WeaponConfig weaponConfig;
        
        private IHealth _health;
        private Animator _animator;
        private InputPlayerActions _inputs;
        private ISimpleStateMachine _stateMachineContext;
        private float _currentDashTime;

        public GameplayChannelSo GameplayChannel => gameplayChannelSo;
        public Vector2 BlockPosition { get => blockPosition.position; }
        public Vector2 BlockSize { get => new(blockSize.x, blockSize.y); }
        public bool IsBlockPressed { get => Input.GetMouseButton(1); }
        public bool CanDoDamage { get; set; }
        public bool IsAttack { get; private set; }
        public bool IsDead { get; private set; }
        public bool IsDash { get; private set; }
        public bool IsJump { get; private set; }
        public bool IsIgnoringDamage { get; set; }
        public Melee Melee { get; private set; }
        public MovementBehaviour Movement { get; private set; }
        public CheckGround CheckGround { get; private set; }
        public Vector2 MovementDirection { get; private set; }
        public AnimationHandler AnimationHandler { get; private set; }
        public Rigidbody2D Rigidbody { get; private set; }
        public Collider2D Collider { get; private set; }
        public WeaponConfig WeaponConfig => weaponConfig;
        public float DashForce => dashForce;
        public float DashCooldown => dashCooldown;
        public bool CanDash { get; set; }

        private void Awake()
        {
            _health = GetComponent<Health>();
            _animator = GetComponent<Animator>();
            _inputs = GetComponent<InputPlayerActions>();
            _stateMachineContext = new SimpleStateMachine();
            _currentDashTime = dashTime;
            Collider = GetComponent<CapsuleCollider2D>();
            Rigidbody = GetComponent<Rigidbody2D>();
            MovementDirection = Vector2.zero;
            Melee = new Melee(WeaponConfig, weaponTransform, WeaponConfig.timeToAttack);
            AnimationHandler = new AnimationHandler(_animator);
            Movement = new MovementBehaviour(movementSpeed, Rigidbody, jumpForce);
            CheckGround = new CheckGround(groundPosition, checkRadius, groundLayer);
        }

        private void Start()
        {
            _health.TakeMaxLife();
            SwitchState(new IdlePlayerState(this));
        }

        private void OnEnable()
        {
            ServiceLocator.ForSceneOf(this).Register<BasePlayer>(this);
            _inputs.OnDash += OnInputDash;
            _inputs.OnJump += OnInputJump;
            _inputs.OnFire += OnInputAttack;
            _health.OnTakeLife += OnTakeLife;
            _inputs.OnMotion += OnInputMotion;
            _health.OnTakeDamage += OnTakeDamage;
        }

        private void OnDisable()
        {
            ServiceLocator.ForSceneOf(this).Unregister<BasePlayer>();
            _inputs.OnDash -= OnInputDash;
            _inputs.OnJump -= OnInputJump;
            _inputs.OnFire -= OnInputAttack;
            _health.OnTakeLife -= OnTakeLife;
            _inputs.OnMotion -= OnInputMotion;
            _health.OnTakeDamage -= OnTakeDamage;
        }

        private void Update()
        {
            var deltaTime = Time.deltaTime;
            
            if (!CanDash)
            {
                _currentDashTime -= deltaTime;
                if (_currentDashTime <= 0)
                {
                    _currentDashTime = dashTime;
                    CanDash = true;
                }
            }

            if (Movement.Direction != Vector2.zero)
            {
                transform.localScale = new Vector3(Movement.Direction.normalized.x, transform.localScale.y, transform.localScale.z);
            }
            
            _stateMachineContext?.CurrentState.UpdateState(deltaTime);
            Melee.Update(deltaTime);
        }

        private void FixedUpdate()
        {
            _stateMachineContext?.CurrentState.FixedUpdateState(Time.deltaTime);
        }
        
        public void SwitchState(BaseStatePlayer newState)
        {
            _stateMachineContext.SwitchState(newState);
        }

        public override void TakeLife(float value)
        {
            _health.TakeLife(value);
        }

        public override void TakeDamage(float damage, Vector3 force)
        {
            _health.TakeDamage(damage, force);
        }
        
        private void OnInputAttack(bool isAttack)
        {
            IsAttack = isAttack;
        }
        
        private void OnInputMotion(Vector2 motion)
        {
            motion.y = 0;
            MovementDirection = motion;
        }

        private void OnTakeLife(float currentLife)
        {
            gameplayChannelSo.ApplyLife(currentLife);
        }
        
        private void OnTakeDamage(float currentLife, Vector2 force)
        {
            if (IsIgnoringDamage)
            {
                return;
            }
            
            gameplayChannelSo.ApplyLife(currentLife);

            if (currentLife > 0)
            {
                SwitchState(new TakeHitPlayerState(this));
                return;
            }
            
            IsDead = true;
            SwitchState(new DiePlayerState(this));
        }

        private void OnInputDash(bool isDash)
        {
            IsDash = isDash;
        }
        
        private void OnInputJump(bool isJump)
        {
            IsJump = isJump;
        }

        public void EnableDamage()
        {
            CanDoDamage = true;
        }
        
        private void OnDrawGizmos()
        {
            CheckGroundGizmos();
            RangeDamageGizmos();
            BlockGizmos();
        }

        private void CheckGroundGizmos()
        {
            Gizmos.color = Color.green;
            Gizmos.DrawWireSphere(groundPosition.position, checkRadius);
        }

        private void RangeDamageGizmos()
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(weaponTransform.position, WeaponConfig.radius);
        }

        private void BlockGizmos()
        {
            Gizmos.color = Color.green;
            Gizmos.DrawWireCube(blockPosition.position, blockSize);
        }
    }
}