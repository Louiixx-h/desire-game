using UnityEngine;

namespace Desire.Scripts.Game.Enemy.States
{
    public class AttackEnemyState : BaseStateEnemy
    {
        private bool _alreadyAttack;
        
        public AttackEnemyState(EnemyBehaviour enemy): base(enemy, "Attack") {}

        public override void StartState()
        {
            Enemy.AnimationHandler.Play(Enemy.WeaponConfig.nameAnimation);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.AnimationHandler.IsFinished(0, Enemy.WeaponConfig.tagAnimation))
            {
                Enemy.SwitchState(new IdleEnemyState(Enemy));
                return;
            }
            
            Move(Time.deltaTime);
        }

        public override void FixedUpdateState(float deltaTime)
        {
            if (_alreadyAttack) return;
            if (!Enemy.CanDoDamage) return;
            
            Enemy.Melee.DoDamage();

            Enemy.CanDoDamage = false;
            _alreadyAttack = true;
        }
    }
}