using AlienWaves.CoreDI;
using Desire.Scripts.Game.Behaviours;
using Desire.Scripts.Game.Core;
using Desire.Game.StateMachine;
using System;
using UnityEngine;
using Desire.Game.Enemy.States;
using Desire.Behaviours;

namespace Desire.Game.Enemy
{
    public abstract class BaseEnemy : MonoBehaviour, IDisposable
    {
        [Header("Skin")]
        [SerializeField] protected SpriteRenderer sprite;
        [SerializeField] private CapsuleCollider2D capsuleCollider2D;

        protected IHealth health;
        protected Animator animator;
        protected ISimpleStateMachine simpleStateMachine;
        protected StateMachineContext stateMachine;
        protected ColliderDamageBehaviour colliderDamageBehaviour;

        public Collider2D Collider { get; private set; }
        public AnimationHandler AnimationHandler { get; private set; }
        public bool IsPlayerNull { get; private set; }
        public BasePlayer Player { get; private set; }

        protected virtual void Awake()
        {
            health = GetComponent<Health>();
            animator = GetComponent<Animator>();
            Collider = GetComponent<CapsuleCollider2D>();
            AnimationHandler = new AnimationHandler(animator);
            colliderDamageBehaviour = new ColliderDamageBehaviour(
                whatIsPlayer: LayerMask.GetMask("Player"),
                colliderPosition: transform,
                capsuleCollider: capsuleCollider2D,
                damage: 10,
                colliderCooldown: 1f
            );
        }

        protected virtual void Start()
        {
            ServiceLocator.ForSceneOf(this).Get(out BasePlayer basePlayer);
            Player = basePlayer;
            IsPlayerNull = Player == null;
            health.TakeMaxLife();
            DefineStates();
        }

        protected virtual void Update()
        {
            var deltaTime = Time.deltaTime;
            simpleStateMachine?.CurrentState.UpdateState(deltaTime);
            stateMachine?.Update(deltaTime);
        }

        protected virtual void FixedUpdate()
        {
            var deltaTime = Time.fixedDeltaTime;
            colliderDamageBehaviour.Tick(deltaTime);
            simpleStateMachine?.CurrentState.FixedUpdateState(deltaTime);
            stateMachine?.FixedUpdate(deltaTime);
        }

        protected virtual void DefineStates() {}

        public void SwitchState(BaseStateEnemy newState)
        {
            simpleStateMachine?.SwitchState(newState);
        }

        public void At(IState from, IState to, IPredicate condition) => stateMachine?.AddTransition(from, to, condition);
        public void Any(IState to, IPredicate condition) => stateMachine?.AddAnyTransition(to, condition);

        protected void DisableCollder() 
        {
            colliderDamageBehaviour.DisableCollider();
        }

        public void Dispose()
        {
            Destroy(gameObject);
        }
    }
}
