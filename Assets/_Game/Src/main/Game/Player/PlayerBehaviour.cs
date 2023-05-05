using System.Collections.Generic;
using Desire.Game.Behaviours;
using Desire.Game.Behaviours.Combat;
using Desire.Game.Inputs;
using Desire.Game.Player.StateMachine;
using Desire.Game.Player.StateMachine.States;
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

        private Rigidbody2D _rigidbody;
        private InputPlayerActions _inputs;
        private Animator _animator;
        private IStateMachineContext _stateMachineContext;

        [field:SerializeField] 
        public List<Attack> Attacks  { get; private set; }
        public Vector2 MovementDirection { get; private set; }
        public bool IsAttack { get; private set; }
        public bool IsJump { get; private set; }
        public Movement Movement { get; private set; }
        public CheckGround CheckGround { get; private set; }
        public PlayerAnimationHandler PlayerAnimationHandler { get; private set; }

        private void Awake()
        {
            _animator = GetComponent<Animator>();
            _inputs = GetComponent<InputPlayerActions>();
            _rigidbody = GetComponent<Rigidbody2D>();
            _stateMachineContext = new StateMachineContext();
            
            MovementDirection = Vector2.zero;
            Movement = new Movement(sprite, movementSpeed, _rigidbody, jumpForce);
            CheckGround = new CheckGround(groundPosition, checkRadius, groundLayer);
            PlayerAnimationHandler = new PlayerAnimationHandler(_animator);
        }

        private void Start()
        {
            SwitchState(new IdlePlayerState(this));
        }

        private void OnEnable()
        {
            _inputs.OnFire += OnInputAttack;
            _inputs.OnMotion += OnInputMotion;
            _inputs.OnJump += OnInputJump;
        }

        private void OnDisable()
        {
            _inputs.OnFire -= OnInputAttack;
            _inputs.OnMotion -= OnInputMotion;
            _inputs.OnJump -= OnInputJump;
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
        }

        private void OnInputJump(bool isJump)
        {
            IsJump = isJump;
        }

        private void OnDrawGizmos()
        {
            CheckGroundGizmos();
        }

        private void CheckGroundGizmos()
        {
            Gizmos.color = Color.green;
            Gizmos.DrawWireSphere(groundPosition.position, checkRadius);
        }
    }
}