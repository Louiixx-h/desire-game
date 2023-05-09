using Desire.DI;
using Desire.Game.Behaviours;
using Desire.Game.Behaviours.Combat;
using Desire.Game.Inputs;
using Desire.Game.Player.StateMachine;
using Desire.Game.Player.StateMachine.States;
using Desire.Ui;
using UnityEngine;

namespace Desire.Game.Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    [RequireComponent(typeof(InputPlayerActions))]
    [RequireComponent(typeof(Animator))]
    public class PlayerBehaviour : MonoBehaviour
    {
        [Header("Movement")]
        
        [SerializeField]
        private float movementSpeed = 5;
        [SerializeField]
        private float jumpForce = 5;
        
        [Header("Check Ground")]
        
        [SerializeField]
        private float checkRadius = 0.2f;
        [SerializeField]
        private Transform groundPosition;
        [SerializeField]
        private LayerMask groundLayer;
        
        [Header("Skin")]
        
        [SerializeField]
        private SpriteRenderer sprite;
        
        [Header("Combat")]

        [SerializeField]                   
        private Transform weaponTransform; 
        [field:SerializeField]
        public WeaponConfig WeaponConfig { get; private set; }

        [HideInInspector]
        [Inject(InjectFrom.Anywhere)] 
        public UiHealthPlayer uiHealth;
        
        private IHealth _health;
        private Rigidbody2D _rigidbody;
        private InputPlayerActions _inputs;
        private Animator _animator;
        private IStateMachineContext _stateMachineContext;

        public Vector2 MovementDirection { get; private set; }
        public bool IsAttack { get; private set; }
        public bool IsDead { get; private set; }
        public bool IsJump { get; private set; }
        public Melee Melee { get; private set; }
        public Movement Movement { get; private set; }
        public CheckGround CheckGround { get; private set; }
        public PlayerAnimationHandler PlayerAnimationHandler { get; private set; }

        private void Awake()
        {
            _health = GetComponent<Health>();
            _animator = GetComponent<Animator>();
            _inputs = GetComponent<InputPlayerActions>();
            _rigidbody = GetComponent<Rigidbody2D>();
            _stateMachineContext = new StateMachineContext();
            
            MovementDirection = Vector2.zero;
            Melee = new Melee(WeaponConfig, weaponTransform);
            Movement = new Movement(sprite, movementSpeed, _rigidbody, jumpForce);
            CheckGround = new CheckGround(groundPosition, checkRadius, groundLayer);
            PlayerAnimationHandler = new PlayerAnimationHandler(_animator);
        }

        private void Start()
        {
            SwitchState(new IdlePlayerState(this));
            _health.TakeMaxLife();
        }

        private void OnEnable()
        {
            _inputs.OnFire += OnInputAttack;
            _inputs.OnMotion += OnInputMotion;
            _inputs.OnJump += OnInputJump;
            _health.OnTakeLife += OnTakeLife;
            _health.OnTakeDamage += OnTakeDamage;
        }

        private void OnDisable()
        {
            _inputs.OnFire -= OnInputAttack;
            _inputs.OnMotion -= OnInputMotion;
            _inputs.OnJump -= OnInputJump;
            _health.OnTakeLife += OnTakeLife;
            _health.OnTakeDamage += OnTakeDamage;
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