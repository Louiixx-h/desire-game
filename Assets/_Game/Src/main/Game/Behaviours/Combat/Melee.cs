using UnityEngine;

namespace Desire.Game.Behaviours.Combat
{
    public class Melee
    {
        private readonly WeaponConfig _weaponConfig;
        private readonly Transform _weaponTransform;

        private const int EmptyList = 0;
        
        public Melee(WeaponConfig weaponConfig, Transform weaponTransform)
        {
            _weaponConfig = weaponConfig;
            _weaponTransform = weaponTransform;
        }

        public void DoDamage()
        {
            EnableDamageArea();
        }

        private void EnableDamageArea()
        {
            var colliders = Physics2D.OverlapCircleAll(
                _weaponTransform.position, 
                _weaponConfig.radius, 
                _weaponConfig.layer
            );
            
            if (colliders.Length == EmptyList) return;

            foreach (var coll in colliders)
            {
                if(!coll.TryGetComponent(out IDamageable damageable)) return;
                
                damageable.TakeDamage(_weaponConfig.baseDamage);
            }
        }
    }
}