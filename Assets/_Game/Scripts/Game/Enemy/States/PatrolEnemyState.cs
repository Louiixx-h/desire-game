using Desire.Game.Enemy.Behaviours;
using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class PatrolEnemyState : BaseStateEnemy
    {
        private Vector2 direction;
        private readonly MovementBehaviour _movement;
        private readonly PatrolBehaviour _patrolBehaviourV2;

        public PatrolEnemyState(BaseEnemy enemy, PatrolBehaviour patrolBehaviour, MovementBehaviour movement) : base(enemy, "Run")
        {
            _patrolBehaviourV2 = patrolBehaviour;
            _movement = movement;
        }

        public override void StartState()
        {
            Debug.Log(this.GetType().Name);
            _patrolBehaviourV2.StartPatrol();
            Context.AnimationHandler.Play("Run");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            _patrolBehaviourV2.Tick(out var movementDirection);
            direction = movementDirection;
        }

        public override void FixedUpdateState(float deltaTime)
        {
            _movement.Tick(deltaTime, direction);
        }
    }
}