using Desire.Game.Behaviours;
using Desire.Game.Behaviours.Combat;
using Desire.Game.Enemy.States;
using Desire.Game.Player.StateMachine;
using UnityEngine;

namespace Desire.Game.Enemy
{
    public class EnemyBehaviour : MonoBehaviour
    {
        [Header("Movement")]
        [SerializeField] private float movementSpeed = 2;
        
        [Header("Skin")]
        [SerializeField] private SpriteRenderer sprite;
        
        [Header("Combat")]
        [SerializeField] private Transform weaponTransform;
        [field:SerializeField] public WeaponConfig WeaponConfig { get; private set; }
        
        [field:SerializeField] public float Distance { get; private set; }
        [field:SerializeField] public LayerMask WhatIsEndPoint { get; private set; }
        
        private IHealth _health;
        private Animator _animator;
        private Rigidbody2D _rigidbody;
        private IStateMachineContext _stateMachineContext;

        public bool IsAttack { get; private set; }
        public bool IsDead { get; private set; }
        public Melee Melee { get; private set; }
        public Movement Movement { get; private set; }
        public Vector2 MovementDirection { get; set; }
        public AnimationHandler AnimationHandler { get; private set; }

        private void Awake()
        {
            _health = GetComponent<Health>();
            _animator = GetComponent<Animator>();
            _rigidbody = GetComponent<Rigidbody2D>();
            _stateMachineContext = new StateMachineContext();
            
            MovementDirection = Vector2.zero;
            Melee = new Melee(WeaponConfig, weaponTransform);
            Movement = new Movement(sprite, movementSpeed, _rigidbody, 0, false);
            AnimationHandler = new AnimationHandler(_animator);
        }

        private void Start()
        {
            _health.TakeMaxLife();
            SwitchState(new PatrolEnemyState(this));
        }

        private void Update()
        {
            _stateMachineContext?.CurrentState.UpdateState(Time.deltaTime);
        }

        private void FixedUpdate()
        {
            _stateMachineContext?.CurrentState.FixedUpdateState(Time.deltaTime);
        }
        
        public void SwitchState(BaseStateEnemy newState)
        {
            _stateMachineContext.SwitchState(newState);
        }
        
        private void OnDrawGizmos()
        {
            RangeDamageGizmos();
            LineCheckGizmos();
        }

        private void LineCheckGizmos()
        {
            Gizmos.color = Color.yellow;
            Gizmos.DrawLine(weaponTransform.position, MovementDirection);    
        } 
        
        private void RangeDamageGizmos()
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(weaponTransform.position, WeaponConfig.radius);
        }
    }
}