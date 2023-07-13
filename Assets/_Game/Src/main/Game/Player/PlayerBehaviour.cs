using Desire.DI;
using Desire.Game.Behaviours;
using Desire.Game.Behaviours.Combat;
using Desire.Game.Inputs;
using Desire.Game.Player.StateMachine;
using Desire.Game.Player.States;
using Desire.Ui;
using UnityEngine;

namespace Desire.Game.Player
{
    public class PlayerBehaviour : MonoBehaviour
    {
        [Header("Movement")]
        [SerializeField] private float movementSpeed = 5;
        [SerializeField] private float jumpForce = 5;
        
        [Header("Check Ground")]
        [SerializeField] private float checkRadius = 0.2f;
        [SerializeField] private Transform groundPosition;
        [SerializeField] private LayerMask groundLayer;
        
        [Header("Skin")]
        [SerializeField] private SpriteRenderer sprite;
        
        [Header("Combat")]
        [SerializeField] private Transform weaponTransform; 
        [field:SerializeField] public WeaponConfig WeaponConfig { get; private set; }
        
        [HideInInspector] [Inject(InjectFrom.Anywhere)] public UiHealthPlayer uiHealth;
        
        private IHealth _health;
        private Animator _animator;
        private Rigidbody2D _rigidbody;
        private InputPlayerActions _inputs;
        private IStateMachineContext _stateMachineContext;

        public bool IsAttack { get; private set; }
        public bool IsDead { get; private set; }
        public bool IsJump { get; private set; }
        public Melee Melee { get; private set; }
        public Movement Movement { get; private set; }
        public CheckGround CheckGround { get; private set; }
        public Vector2 MovementDirection { get; private set; }
        public AnimationHandler AnimationHandler { get; private set; }

        private void Awake()
        {
            _health = GetComponent<Health>();
            _animator = GetComponent<Animator>();
            _rigidbody = GetComponent<Rigidbody2D>();
            _inputs = GetComponent<InputPlayerActions>();
            _stateMachineContext = new StateMachineContext();
            
            MovementDirection = Vector2.zero;
            Melee = new Melee(WeaponConfig, weaponTransform);
            AnimationHandler = new AnimationHandler(_animator);
            Movement = new Movement(sprite, movementSpeed, _rigidbody, jumpForce);
            CheckGround = new CheckGround(groundPosition, checkRadius, groundLayer);
        }

        private void Start()
        {
            _health.TakeMaxLife();
            SwitchState(new IdlePlayerState(this));
        }

        private void OnEnable()
        {
            _inputs.OnJump += OnInputJump;
            _inputs.OnFire += OnInputAttack;
            _health.OnTakeLife += OnTakeLife;
            _inputs.OnMotion += OnInputMotion;
            _health.OnTakeDamage += OnTakeDamage;
        }

        private void OnDisable()
        {
            _inputs.OnJump -= OnInputJump;
            _inputs.OnFire -= OnInputAttack;
            _health.OnTakeLife -= OnTakeLife;
            _inputs.OnMotion -= OnInputMotion;
            _health.OnTakeDamage -= OnTakeDamage;
        }

        private void Update()
        {
            _stateMachineContext?.CurrentState.UpdateState(Time.deltaTime);
        }

        private void FixedUpdate()
        {
            _stateMachineContext?.CurrentState.FixedUpdateState(Time.deltaTime);
        }
        
        public void SwitchState(BaseStatePlayer newState)
        {
            _stateMachineContext.SwitchState(newState);
        }

        public void TakeLife(float value)
        {
            _health.TakeLife(value);
        }
        
        private void OnInputAttack(bool isAttack)
        {
            IsAttack = isAttack;
        }
        
        private void OnInputMotion(Vector2 motion)
        {
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
            uiHealth.ChangeLife(currentLife);
        }
        
        private void OnTakeDamage(float currentLife)
        {
            uiHealth.ChangeLife(currentLife);

            if (!(currentLife <= 0))
            {
                SwitchState(new TakeHitPlayerState(this));
                return;
            }
            
            IsDead = true;
            SwitchState(new DiePlayerState(this));
        }

        private void OnInputJump(bool isJump)
        {
            IsJump = isJump;
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