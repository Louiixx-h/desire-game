using Desire.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.AI
{
    public class AIEnemy : MonoBehaviour
    {
        [SerializeField] private LayerMask whatIsPlayer;
        [SerializeField] private Transform colliderPosition;
        [SerializeField] private BoxCollider2D boxCollider;
        [SerializeField] [Range(1, 60)] private float damage;
        [SerializeField] [Range(1, 20)] private float colliderCooldown;

        private bool _canDoDamage;
        private float _cooldownDamage;

        private void FixedUpdate()
        {
            if (_canDoDamage)
            {
                ActivateDamageCollider();   
                _cooldownDamage = colliderCooldown;
            }
            else
            {
                _cooldownDamage -= Time.deltaTime;   
            }

            if (_cooldownDamage <= 0)
            {
                _canDoDamage = true;
            }
        }

        private void ActivateDamageCollider()
        {
            var colliders = Physics2D.OverlapBoxAll(
                colliderPosition.position, 
                boxCollider.size, 
                0f, 
                whatIsPlayer
            );

            if (colliders.Length <= 0) return;

            foreach (var coll in colliders)
            {
                var isDamageable = coll.TryGetComponent(out IDamageable damageable);
                if (!isDamageable) return;
                damageable.TakeDamage(damage);
                _canDoDamage = false;
            }
        }

        private void OnDrawGizmos()
        {
            ColliderGizmo();
        }

        private void ColliderGizmo()
        {
            Gizmos.color = Color.green;
            Gizmos.DrawWireCube(colliderPosition.position, boxCollider.size);
        }
    }
}