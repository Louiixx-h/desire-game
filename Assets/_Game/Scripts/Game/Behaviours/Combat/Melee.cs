using UnityEngine;

namespace Desire.Scripts.Game.Behaviours.Combat
{
    public class Melee
    {
        private readonly WeaponConfig _weaponConfig;
        private readonly Transform _weaponTransform;
        private readonly float _timeToAttack;
        private float _waitTime;

        private const int EmptyList = 0;

        public bool IsReadyToAttack { get; set; }
        public bool CanDoDamage { get; set; }

        public Melee(WeaponConfig weaponConfig, Transform weaponTransform)
        {
            _weaponConfig = weaponConfig;
            _weaponTransform = weaponTransform;
            _timeToAttack = 0;
        }
        
        public Melee(WeaponConfig weaponConfig, Transform weaponTransform, float timeToAttack)
        {
            _weaponConfig = weaponConfig;
            _weaponTransform = weaponTransform;
            _timeToAttack = timeToAttack;
        }

        public void DoDamage(Vector3 position)
        {
            EnableDamageArea(position);
            IsReadyToAttack = false;
        }

        private void EnableDamageArea(Vector3 position)
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
                var forceDirection = (coll.transform.position - position).normalized;
                forceDirection.y = 0;
                forceDirection.z = 0;
                damageable.TakeDamage(_weaponConfig.baseDamage,  forceDirection * _weaponConfig.force);
            }
        }
        
        public void Update(float deltaTime)
        {
            if (IsReadyToAttack) return;
            _waitTime -= deltaTime;
            if (_waitTime > 0) return;
            IsReadyToAttack = true;
            _waitTime = _timeToAttack;
        }
    }
}