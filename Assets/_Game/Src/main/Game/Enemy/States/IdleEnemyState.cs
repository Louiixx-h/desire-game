using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class IdleEnemyState : BaseStateEnemy
    {
        public IdleEnemyState(EnemyBehaviour enemy) : base(enemy, "Idle"){}

        public override void StartState()
        {
            Enemy.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.IsAttack)
            {
                Enemy.SwitchState(new AttackEnemyState(Enemy));
                return;
            }
            
            if (Enemy.MovementDirection != Vector2.zero)
            {
                Enemy.SwitchState(new WalkEnemyState(Enemy));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime);
        }
    }
}