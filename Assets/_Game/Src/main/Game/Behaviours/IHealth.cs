using System;

namespace Desire.Game.Behaviours
{
    public interface IHealth
    {
        public Action<float> OnTakeLife { get; set; }
        public Action<float> OnTakeDamage { get; set; }

        public void TakeLife(float value);
        public void TakeMaxLife();
    }
}