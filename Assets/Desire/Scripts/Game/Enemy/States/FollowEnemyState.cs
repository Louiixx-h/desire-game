using UnityEngine;

namespace Desire.Scripts.Game.Enemy.States
{
    public class FollowEnemyState : BaseStateEnemy
    {
        public FollowEnemyState(EnemyBehaviour enemy): base(enemy, "Run"){}

        public override void StartState()
        {
            Enemy.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.IsInRangeOfAttack() && Enemy.Melee.IsReadyToAttack)
            {
                Enemy.SwitchState(new AttackEnemyState(Enemy));
                return;
            }
            
            if (Enemy.MovementDirection == Vector2.zero)
            {
                Enemy.SwitchState(new IdleEnemyState(Enemy));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            if (Enemy.IsPlayerNull) return;
            if (!Enemy.IsInRangeOfVision())
            {
                Enemy.MovementDirection = Vector2.zero;
                return;
            }

            Vector3 direction;
            var currentPosition = Enemy.transform.position;
            var playerPosition = Enemy.Player.transform.position;
            
            direction = (playerPosition - currentPosition).normalized;
            Enemy.MovementDirection = new Vector2(direction.x, 0);
            
            Move(deltaTime, Enemy.MovementDirection);
        }
    }
}