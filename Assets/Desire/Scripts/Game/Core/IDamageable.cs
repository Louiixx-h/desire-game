using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public interface IDamageable
    {
        public void TakeDamage(float damage, Vector3 force);
    }
}
