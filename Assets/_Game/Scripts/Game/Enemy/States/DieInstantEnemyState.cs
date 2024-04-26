using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class DieInstantEnemyState : BaseStateEnemy
    {
        private readonly Rigidbody2D _rigidbody;
        private readonly MovementBehaviour _movement;
    
        public DieInstantEnemyState(BaseEnemy enemy, MovementBehaviour movement, Rigidbody2D rigidbody) : base(enemy, "Die")
        {
            _movement = movement;
            _rigidbody = rigidbody;
        }

        public override void StartState()
        {
            _rigidbody.simulated = false;
            Context.Collider.enabled = false;
            Context.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Context.AnimationHandler.IsFinished(0, Name))
            {
                Context.Dispose();
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            _movement.Tick(deltaTime, Vector2.zero);
        }
    }
}