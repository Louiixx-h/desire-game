using UnityEngine;

namespace Desire.Scripts.Game.Core
{
    public abstract class BasePlayer: MonoBehaviour
    {
        public abstract void TakeLife(float lifeAmount);
        public abstract void TakeDamage(float damage, Vector3 force);
    }
}