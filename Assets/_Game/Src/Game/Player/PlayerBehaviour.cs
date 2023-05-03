using System.Collections.Generic;
using _Game.Src.Game.Behaviours;
using _Game.Src.Game.Behaviours.Combat;
using _Game.Src.Game.Inputs;
using _Game.Src.Game.Player.StateMachine;
using _Game.Src.Game.Player.StateMachine.States;
using UnityEngine;

namespace _Game.Src.Game.Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    [RequireComponent(typeof(InputPlayerActions))]
    [RequireComponent(typeof(Animator))]
    public class PlayerBehaviour : MonoBehaviour
    {
        [SerializeField]
        private float movementSpeed = 5;
        [SerializeField]
        private SpriteRenderer sprite;
        
        private Rigidbody2D _rigidbody;
        private InputPlayerActions _inputs;
        private Animator _animator;
        private Vector2 _movementDirection;
        private IStateMachineContext _stateMachineContext;

        [field:SerializeField] 
        public List<Attack> Attacks  { get; private set; }
        public Vector2 MovementDirection { get => _movementDirection; private set => _movementDirection = value; }
        public bool IsAttack { get; private set; }
        public Movement Movement { get; private set; }
        public PlayerAnimationHandler PlayerAnimationHandler { get; private set; }

        private void Awake()
        {
            _animator = GetComponent<Animator>();
            _inputs = GetComponent<InputPlayerActions>();
            _rigidbody = GetComponent<Rigidbody2D>();
        }

        private void Start()
        {
            _stateMachineContext = new StateMachineContext();
            MovementDirection = Vector2.zero;
            Movement = new Movement(sprite, movementSpeed, _rigidbody);
            PlayerAnimationHandler = new PlayerAnimationHandler(_animator);
            
            SwitchState(new IdlePlayerState(this));
        }

        private void OnEnable()
        {
            _inputs.OnFire += OnInputAttack;
            _inputs.OnMotion += OnInputMotion;
        }

        private void OnDisable()
        {
            _inputs.OnFire -= OnInputAttack;
            _inputs.OnMotion -= OnInputMotion;
        }

        private void Update()
        {
            _stateMachineContext?.CurrentState.UpdateState(Time.deltaTime);
        }

        private void FixedUpdate()
        {
            _stateMachineContext?.CurrentState.FixedUpdateState(Time.deltaTime);
        }

        private void OnInputAttack(bool isAttack)
        {
            IsAttack = isAttack;
        }
        
        private void OnInputMotion(Vector2 motion)
        {
            _movementDirection = motion;
        }

        public void SwitchState(BaseStatePlayer newState)
        {
            _stateMachineContext.SwitchState(newState);
        }
    }
}