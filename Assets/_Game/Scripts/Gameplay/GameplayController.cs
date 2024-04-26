using Desire.Channels;
using UnityEngine;

namespace Desire.Gameplay
{
    public class GameplayController : MonoBehaviour
    {
        [SerializeField] private GameObject gameplayPanel;
        [SerializeField] private GameObject gameOverPanel;
        [SerializeField] private GameplayChannelSo gameplayChannelSo;

        public void Awake()
        {
            gameplayChannelSo.OnPlayerDie += GameOver;
        }

        public void OnDestroy()
        {
            gameplayChannelSo.OnPlayerDie -= GameOver;
        }

        private void GameOver()
        {
            gameOverPanel.SetActive(true);
            gameplayPanel.SetActive(false);
        }
    }
}