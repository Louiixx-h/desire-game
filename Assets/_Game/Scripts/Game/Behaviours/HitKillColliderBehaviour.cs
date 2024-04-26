using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Behaviours
{
    public class HitKillColliderBehaviour : MonoBehaviour
    {
        public void OnTriggerEnter2D(Collider2D other)
        {
            if (other.TryGetComponent(out IDamageable damageable)) {
                damageable.TakeDamage(10000000, Vector3.zero);
            }
        }
    }
}