using UnityEngine;

namespace Desire.Scripts.Game.Enemy.States
{
    public class PatrolEnemyState : BaseStateEnemy
    {
        public PatrolEnemyState(EnemyBehaviour enemy): base(enemy, "Run"){}

        public override void StartState()
        {
            Vector3 direction;
            var position = Enemy.transform.position;
            var pointA = Enemy.PatrolArea.GetStartPoint();
            var pointB = Enemy.PatrolArea.GetEndPoint();
            var distanceFromPointA = Vector3.Distance(position, pointA);
            var distanceFromPointB = Vector3.Distance(position, pointB);

            if (distanceFromPointA < distanceFromPointB)
            {
                direction = (pointA - position).normalized;
            }
            else
            {
                direction = (pointB - position).normalized;
            }
            
            Enemy.MovementDirection = new Vector2(direction.x, 0);
            Enemy.AnimationHandler.Play("Run");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.IsInRangeOfAttack() && Enemy.Melee.IsReadyToAttack)
            {
                Enemy.SwitchState(new AttackEnemyState(Enemy));
                return;
            }
            
            if (Enemy.IsInRangeOfVision())
            {
                Enemy.SwitchState(new FollowEnemyState(Enemy));
                return;
            }
            
            if (Enemy.MovementDirection == Vector2.zero)
            {
                Enemy.SwitchState(new IdleEnemyState(Enemy));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Vector3 direction;
            var position = Enemy.transform.position;
            var pointA = Enemy.PatrolArea.GetStartPoint();
            var pointB = Enemy.PatrolArea.GetEndPoint();
            
            if (IsOnPointA())
            {
                direction = (pointB - position).normalized;
                Enemy.MovementDirection = new Vector2(direction.x, 0);
            }
            
            if (IsOnPointB())
            {
                direction = (pointA - position).normalized;
                Enemy.MovementDirection = new Vector2(direction.x, 0);
            }

            Move(deltaTime, Enemy.MovementDirection);
        }

        private bool IsOnPointA()
        {
            var position = Enemy.transform.position;
            var pointA = Enemy.PatrolArea.GetStartPoint();
            return Vector3.Distance(position, pointA) <= 0.5f;
        }
        
        private bool IsOnPointB()
        {
            var position = Enemy.transform.position;
            var pointB = Enemy.PatrolArea.GetEndPoint();
            return Vector3.Distance(position, pointB) <= 0.5f;
        }
    }
}