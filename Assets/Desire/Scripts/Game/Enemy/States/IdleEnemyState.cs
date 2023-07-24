using UnityEngine;

namespace Desire.Scripts.Game.Enemy.States
{
    public class IdleEnemyState : BaseStateEnemy
    {
        private float _idleDuration;

        public IdleEnemyState(EnemyBehaviour enemy) : base(enemy, "Idle")
        {
            _idleDuration = 0;
        }

        public IdleEnemyState(EnemyBehaviour enemy, float idleDuration) : base(enemy, "Idle")
        {
            _idleDuration = idleDuration;
        }
        
        public override void StartState()
        {
            Enemy.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.IsPlayerNull) return;
            _idleDuration -= deltaTime;
            if (_idleDuration > 0) return;
            
            if (Enemy.IsInRangeOfAttack() && Enemy.Melee.IsReadyToAttack)
            {
                Enemy.SwitchState(new AttackEnemyState(Enemy));
                return;
            }
            
            if (Enemy.IsInRangeOfVision() && !Enemy.IsInRangeOfAttack())
            {
                Enemy.SwitchState(new FollowEnemyState(Enemy));
                return;
            }

            if (!Enemy.IsInRangeOfVision() && !Enemy.IsInRangeOfAttack())
            {
                Enemy.SwitchState(new PatrolEnemyState(Enemy));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime);
        }
    }
}