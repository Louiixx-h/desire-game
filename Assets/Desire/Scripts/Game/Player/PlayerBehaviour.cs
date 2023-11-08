using Desire.DI;
using Desire.Scripts.Game.Behaviours;
using Desire.Scripts.Game.Behaviours.Combat;
using Desire.Scripts.Game.Core;
using Desire.Scripts.Game.Core.UI;
using Desire.Scripts.Game.Inputs;
using Desire.Scripts.Game.Player.States;
using Desire.Scripts.Game.StateMachine;
using UnityEngine;

namespace Desire.Scripts.Game.Player
{
    public class PlayerBehaviour : BasePlayer
    {
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
        
        [HideInInspector] [Inject(InjectFrom.Anywhere)] public BaseGameplay uiHealth;
        
        private IHealth _health;
        private Animator _animator;
        private InputPlayerActions _inputs;
        private IStateMachineContext _stateMachineContext;
        private float _currentDashTime;

        public bool CanDoDamage { get; set; }
        public bool IsAttack { get; private set; }
        public bool IsDead { get; private set; }
        public bool IsDash { get; private set; }
        public bool IsJump { get; private set; }
        public Melee Melee { get; private set; }
        public Movement Movement { get; private set; }
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
            _stateMachineContext = new StateMachineContext();
            _currentDashTime = dashTime;
            Collider = GetComponent<CapsuleCollider2D>();
            Rigidbody = GetComponent<Rigidbody2D>();
            MovementDirection = Vector2.zero;
            Melee = new Melee(WeaponConfig, weaponTransform, WeaponConfig.timeToAttack);
            AnimationHandler = new AnimationHandler(_animator);
            Movement = new Movement(sprite, movementSpeed, Rigidbody, jumpForce);
            CheckGround = new CheckGround(groundPosition, checkRadius, groundLayer);
        }

        private void Start()
        {
            _health.TakeMaxLife();
            SwitchState(new IdlePlayerState(this));
        }

        private void OnEnable()
        {
            _inputs.OnDash += OnInputDash;
            _inputs.OnJump += OnInputJump;
            _inputs.OnFire += OnInputAttack;
            _health.OnTakeLife += OnTakeLife;
            _inputs.OnMotion += OnInputMotion;
            _health.OnTakeDamage += OnTakeDamage;
        }

        private void OnDisable()
        {
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

            var localPosition = weaponTransform.localPosition;
            localPosition = motion.x switch
            {
                > 0 => new Vector3(-1.7f, localPosition.y, localPosition.z),
                < 0 => new Vector3(1.7f, localPosition.y, localPosition.z),
                _ => localPosition
            };
            weaponTransform.localPosition = localPosition;
        }

        private void OnTakeLife(float currentLife)
        {
            if(uiHealth == null) return;
            uiHealth.ChangeLife(currentLife);
        }
        
        private void OnTakeDamage(float currentLife, Vector2 force)
        {
            if(uiHealth == null) return;
            uiHealth.ChangeLife(currentLife);

            if (!(currentLife <= 0))
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

        public void DoDamage()
        {
            CanDoDamage = true;
        }
        
        private void OnDrawGizmos()
        {
            CheckGroundGizmos();
            RangeDamageGizmos();
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
    }
}