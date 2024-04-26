using UnityEngine;
using System;

namespace Desire.Channels
{
    [CreateAssetMenu(fileName = "so_channel_gameplay", menuName = "Channels/Gameplay")]
    public class GameplayChannelSo : ScriptableObject 
    {
        public Action OnPlayerDie;
        public Action<bool> OnVisibilityChanged;
        public Action<float> OnLifeChanged;

        public void PlayerDie()
        {
            OnPlayerDie?.Invoke();
        }

        public void Hide() 
        {
            OnVisibilityChanged?.Invoke(false);
        }

        public void Show() 
        {
            OnVisibilityChanged?.Invoke(true);
        }

        public void ApplyLife(float currentLife)
        {
            OnLifeChanged?.Invoke(currentLife);
        }
    }
}