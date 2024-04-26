using System;
using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public class Health: MonoBehaviour, IHealth
    {
        public Action<float> OnTakeLife { get; set; }
        public Action<float, Vector2> OnTakeDamage { get; set; }
        
        private float _currentLife = 1;
        
        private const float MaxLife = 100;
        private const float NoLife = 0;

        public void TakeDamage(float damage, Vector3 force)
        {
            if (_currentLife <= 0)
            {
                return;
            }
            
            _currentLife = Mathf.Clamp(_currentLife - damage, NoLife, MaxLife);
            OnTakeDamage?.Invoke(_currentLife / MaxLife, force);
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