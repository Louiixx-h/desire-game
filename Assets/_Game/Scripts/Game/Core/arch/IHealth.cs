using System;
using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public interface IHealth: IDamageable
    {
        public Action<float> OnTakeLife { get; set; }
        public Action<float, Vector2> OnTakeDamage { get; set; }

        public void TakeLife(float value);
        public void TakeMaxLife();
    }
}