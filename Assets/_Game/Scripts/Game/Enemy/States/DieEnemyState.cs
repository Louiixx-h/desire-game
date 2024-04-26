using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class DieEnemyState : BaseStateEnemy
    {
        private readonly Rigidbody2D _rigidbody;
        private readonly MovementBehaviour _movement;
        private float _waitTime = 5;
    
        public DieEnemyState(BaseEnemy enemy, MovementBehaviour movement, Rigidbody2D rigidbody) : base(enemy, "Die")
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
            _waitTime -= deltaTime;
            if (_waitTime <= 0)
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