using System;

namespace Desire.Game.Behaviours
{
    public interface IHealth
    {
        public Action<float> OnChangeLife { get; set; }

        public void TakeLife(float value);
        public void TakeMaxLife();
    }
}