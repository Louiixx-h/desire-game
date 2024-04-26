using Desire.Scripts.Game.Behaviours;
using Desire.Scripts.Game.Behaviours.Combat;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class AttackEnemyState : BaseStateEnemy
    {
        private readonly WeaponConfig _weaponConfig;
        private readonly MovementBehaviour _movement;
        private readonly Melee _melee;
        private bool _alreadyAttack;
        
        public AttackEnemyState(BaseEnemy enemy, WeaponConfig weaponConfig, MovementBehaviour movement, Melee melee) : base(enemy, "Attack") 
        {
            _weaponConfig = weaponConfig;
            _movement = movement;
            _melee = melee;
        }

        public override void StartState()
        {
            _alreadyAttack = false;
            Context.AnimationHandler.Play(_weaponConfig.nameAnimation);
        }

        public override void UpdateState(float deltaTime)
        {
            _movement.Tick(Time.deltaTime, Vector2.zero);
        }

        public override void FixedUpdateState(float deltaTime)
        {
            if (_alreadyAttack) return;
            if (!_melee.CanDoDamage) return;
            _melee.DoDamage(Vector3.zero);
            _alreadyAttack = true;
            _melee.CanDoDamage = false;
        }
    }
}