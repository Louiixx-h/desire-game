using System;
using Desire.DI;
using Desire.Game.Behaviours;
using Desire.Game.Player;
using UnityEngine;

namespace Desire.Game.AI
{
    public class AIEnemy : MonoBehaviour
    {
        [SerializeField] private LayerMask whatIsPlayer;
        [SerializeField] private Transform colliderPosition;
        [SerializeField] private BoxCollider2D boxCollider;
        [SerializeField] private SpriteRenderer spriteRenderer;
        [SerializeField] [Range(1, 20)] private float moveSpeed;
        [SerializeField] [Range(1, 60)] private float damage;
        [SerializeField] [Range(1, 20)] private float damageColliderCooldown;
    
        private IHealth _health;
        private Rigidbody2D _rigidbody;
        private float _cooldownDamage;

        public Animator Animator { get; private set; }
        [Inject(InjectFrom.Anywhere)] public PlayerBehaviour Player { get; private set; }

        private void Awake()
        {
            Animator = GetComponent<Animator>();

            _rigidbody = GetComponent<Rigidbody2D>();
            _health = GetComponent<Health>();
        }

        private void FixedUpdate()
        {
            if (_cooldownDamage > 0)
            {
                _cooldownDamage -= Time.deltaTime;
                return;
            }
            
            ActivateDamageCollider();
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
                _cooldownDamage = damageColliderCooldown;
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