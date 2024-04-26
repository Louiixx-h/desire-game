using AlienWaves.CoreDI;
using Desire.Game.Commons.Interfaces;
using UnityEngine;

namespace Desire.Ui.Loading
{
    public class UiLoadingScreen : MonoBehaviour
    {
        [SerializeField] private GameObject panel;

        private ISceneController _sceneController;

        private void Awake()
        {
            ServiceLocator.Global.TryGet(out ISceneController sceneController);
            _sceneController = sceneController;
        }

        private void Start()
        {
            _sceneController.OnLoadingStart += OnLoadingStart;
            _sceneController.OnLoadingEnd += OnLoadingEnd;
        }

        private void OnDestroy()
        {
            _sceneController.OnLoadingStart -= OnLoadingStart;
            _sceneController.OnLoadingEnd -= OnLoadingEnd;
        }

        private void OnLoadingStart()
        {
            panel.SetActive(true);
        }

        private void OnLoadingEnd()
        {
            panel.SetActive(false);
        }
    }
}