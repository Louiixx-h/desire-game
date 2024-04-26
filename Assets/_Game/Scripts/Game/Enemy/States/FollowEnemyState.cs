using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class FollowEnemyState : BaseStateEnemy
    {
        private readonly MovementBehaviour _movementBehaviour;

        public FollowEnemyState(BaseEnemy enemy, MovementBehaviour movementBehaviour) : base(enemy, "Run")
        {
            _movementBehaviour = movementBehaviour;
        }

        public override void StartState()
        {
            Context.AnimationHandler.Play(Name);
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Vector3 direction;
            var currentPosition = Context.transform.position;
            var playerPosition = Context.Player.transform.position;
            direction = (playerPosition - currentPosition).normalized;
            _movementBehaviour.Tick(deltaTime, new Vector2(direction.x, 0));
        }
    }
}