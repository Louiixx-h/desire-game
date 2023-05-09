using System;
using UnityEngine;

namespace Desire.Game.Behaviours
{
    public class Health: MonoBehaviour, IDamageable, IHealth
    {
        public Action<float> OnTakeLife { get; set; }
        public Action<float> OnTakeDamage { get; set; }
        
        private float _currentLife = 1;
        private const float MaxLife = 100;

        private const float NoLife = 0;

        public void TakeDamage(float value)
        {
            if (_currentLife <= 0)
            {
                return;
            }
            
            _currentLife = Mathf.Clamp(_currentLife - value, NoLife, MaxLife);
            OnTakeDamage?.Invoke(_currentLife / MaxLife);
        }

        public void TakeLife(float value)
        {
            if (_currentLife <= 0)
            {
                return;
            }
            
            _currentLife = Mathf.Clamp(_currentLife + value, NoLife, MaxLife);
            OnTakeLife?.Invoke(_currentLife / MaxLife);
        }
        
        public void TakeMaxLife()
        {
            TakeLife(MaxLife);
        }
    }
}