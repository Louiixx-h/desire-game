using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class WalkEnemyState : BaseStateEnemy
    {
        public WalkEnemyState(EnemyBehaviour enemy): base(enemy, "Walk"){}

        public override void StartState()
        {
            Enemy.AnimationHandler.Play("Run");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.IsAttack)
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
            Move(deltaTime, Enemy.MovementDirection);
        }
    }
}