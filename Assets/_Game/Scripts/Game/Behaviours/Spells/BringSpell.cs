using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Behaviours.Spells
{
    public class BringSpell : MonoBehaviour {
        [SerializeField] private BoxCollider2D boxCollider;
        [SerializeField] private Animator animator;
        [SerializeField] private float damageDefault = 20;
        private AnimationHandler animationHandler;

        private void Awake() {
            animationHandler = new AnimationHandler(animator);
        }

        private void Update() {
            if (animationHandler.IsFinished(0, "Spell")) {
                Destroy(gameObject);
            }
        }

        private void OnTriggerEnter2D(Collider2D other) {
            if (other.CompareTag("Player") && other.TryGetComponent(out IDamageable damageable)) {
                damageable.TakeDamage(damageDefault, Vector2.zero);
            }
        }

        public void EnableDamage() {
            boxCollider.enabled = true;
        }

        public void SetDamage(float damage) {
            damageDefault = damage;
        }
    }
}