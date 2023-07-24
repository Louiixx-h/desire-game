using Desire.Scripts.Game.Behaviours;
using Desire.Scripts.Game.Behaviours.Combat;
using Desire.Scripts.Game.Core;
using Desire.Scripts.Game.Enemy.States;
using Desire.Scripts.Game.StateMachine;
using UnityEngine;
using UnityEngine.Events;

namespace Desire.Scripts.Game.Enemy
{
    public class EnemyBehaviour : MonoBehaviour
    {
        [SerializeField] private UnityEvent onDie;
        
        [Header("Movement")]
        [SerializeField] private float movementSpeed = 2;
        [SerializeField] private new Rigidbody2D rigidbody;
        [SerializeField] private new Collider2D collider;

        [Header("Patrol")]
        [SerializeField] private PatrolArea patrolArea;
        [Range(0, 60)] [SerializeField] private float rangeVisionDistance;
        
        [Header("Skin")]
        [SerializeField] private SpriteRenderer sprite;

        [Header("Combat")] 
        [Range(0, 30)] [SerializeField] private float rangeAttackDistance;
        [SerializeField] private Transform weaponTransform;
        [SerializeField] private WeaponConfig weaponConfig;

        private IHealth _health;
        private Animator _animator;
        private IStateMachineContext _stateMachineContext;

        public bool CanDoDamage { get; set; }
        public Melee Melee { get; private set; }
        public Movement Movement { get; private set; }
        public Vector2 MovementDirection { get; set; }
        public AnimationHandler AnimationHandler { get; private set; }
        public WeaponConfig WeaponConfig => weaponConfig;
        public PatrolArea PatrolArea => patrolArea;
        public Rigidbody2D Rigidbody => rigidbody;
        public Collider2D Collider => collider;
        public bool IsPlayerNull { get; private set; }
        public BasePlayer Player { get; private set; }

        private void Awake()
        {
            _health = GetComponent<Health>();
            _animator = GetComponent<Animator>();
            rigidbody = GetComponent<Rigidbody2D>();
            collider = GetComponent<CapsuleCollider2D>();
            _stateMachineContext = new StateMachineContext();
            
            MovementDirection = Vector2.zero;
            AnimationHandler = new AnimationHandler(_animator);
            Melee = new Melee(WeaponConfig, weaponTransform, WeaponConfig.timeToAttack);
            Movement = new Movement(sprite, movementSpeed, rigidbody, 0, false);
        }

        private void Start()
        {
            Player = GameObject.FindWithTag("Player").GetComponent<BasePlayer>();
            IsPlayerNull = Player == null;
            _health.TakeMaxLife();
            SwitchState(new IdleEnemyState(this));
        }
        
        private void OnEnable()
        {
            _health.OnTakeDamage += OnTakeDamage;
        }

        private void OnDisable()
        {
            _health.OnTakeDamage -= OnTakeDamage;
        }

        private void Update()
        {
            var deltaTime = Time.deltaTime;
            _stateMachineContext?.CurrentState.UpdateState(deltaTime);
            Melee.Update(deltaTime);
        }

        private void FixedUpdate()
        {
            _stateMachineContext?.CurrentState.FixedUpdateState(Time.deltaTime);
        }
        
        public void SwitchState(BaseStateEnemy newState)
        {
            _stateMachineContext.SwitchState(newState);
        }

        private void OnTakeDamage(float currentLife, Vector2 force)
        {
            if (currentLife > 0)
            {
                SwitchState(new TakeHitEnemyState(this, force));
                return;
            }

            SwitchState(new DieEnemyState(this));
            onDie?.Invoke();
        }
        
        public bool IsInRangeOfAttack()
        {
            if (IsPlayerNull) return false;
            var currentPosition = transform.position;
            var playerPosition = Player.transform.position;
            return Vector2.Distance(currentPosition, playerPosition) <= rangeAttackDistance;
        }

        public bool IsInRangeOfVision()
        {
            if (IsPlayerNull) return false;
            var currentPosition = transform.position;
            var playerPosition = Player.transform.position;
            return Vector2.Distance(currentPosition, playerPosition) <= rangeVisionDistance;
        }

        public void DoDamage()
        {
            CanDoDamage = true;
        }
        
        public void Disappear()
        {
            OnDisable();
            Destroy(transform.parent.gameObject);
        }
        
        private void OnDrawGizmos()
        {
            RangeDamageGizmos();
        }
        
        private void RangeDamageGizmos()
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(weaponTransform.position, WeaponConfig.radius);
        }
    }
}