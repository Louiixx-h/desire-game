using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Behaviours
{
    public class ColliderDamageBehaviour
    {
        private LayerMask _whatIsPlayer;
        private readonly Transform _colliderPosition;
        private readonly CapsuleCollider2D _capsuleCollider;
        private readonly float _damage;
        private readonly float _colliderCooldown;
        private bool _colliderIsEnable = true;
        private bool _canDoDamage;
        private float _cooldownDamage;

        public ColliderDamageBehaviour(
            LayerMask whatIsPlayer, 
            Transform colliderPosition, 
            CapsuleCollider2D capsuleCollider, 
            float damage, 
            float colliderCooldown)
        {
            _whatIsPlayer = whatIsPlayer;
            _colliderPosition = colliderPosition;
            _capsuleCollider = capsuleCollider;
            _damage = damage;
            _colliderCooldown = colliderCooldown;
        }

        // <summary>
        // This method is responsible for activating the damage collider and checking if it is possible to do damage.
        // Call it on FixedUpdate.
        // </summary>
        public void Tick(float deltaTime)
        {
            if(!_colliderIsEnable) return;
            
            if (_canDoDamage)
            {
                ActivateDamageCollider();   
                _cooldownDamage = _colliderCooldown;
            }
            else
            {
                _cooldownDamage -= deltaTime;   
            }

            if (_cooldownDamage <= 0)
            {
                _canDoDamage = true;
            }
        }

        private void ActivateDamageCollider()
        {
            var colliders = Physics2D.OverlapBoxAll(
                _colliderPosition.position,
                _capsuleCollider.size, 
                0f,
                _whatIsPlayer
            );

            if (colliders.Length <= 0) return;

            foreach (var coll in colliders)
            {
                var isDamageable = coll.TryGetComponent(out IDamageable damageable);
                if (!isDamageable) return;
                damageable.TakeDamage(_damage, Vector2.zero);
                _canDoDamage = false;
            }
        }

        public void DisableCollider()
        {
            _colliderIsEnable = false;
        }
    }
}