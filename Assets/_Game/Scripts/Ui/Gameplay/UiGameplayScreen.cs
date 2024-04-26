using Desire.Channels;
using UnityEngine;
using UnityEngine.UI;

namespace Desire.Ui.Gameplay
{
    public class UiGameplayScreen : MonoBehaviour
    {
        [SerializeField] private GameplayChannelSo gameplayChannel;
        [SerializeField] private GameObject gameplayPanel;
        [SerializeField] private Image life;
        
        private void OnEnable()
        {
            gameplayChannel.OnLifeChanged += ChangeLife;
            gameplayChannel.OnVisibilityChanged += SwitchVisibility;
        }

        private void OnDisable()
        {
            gameplayChannel.OnLifeChanged -= ChangeLife;
            gameplayChannel.OnVisibilityChanged -= SwitchVisibility;
        }

        private void ChangeLife(float value)
        {
            life.fillAmount = value;
        }

        private void SwitchVisibility(bool visibility) 
        {
            gameplayPanel.SetActive(visibility);
        }
    }
}