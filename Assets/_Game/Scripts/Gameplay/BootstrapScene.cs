using AlienWaves.CoreDI;
using Desire.Game.Commons.Interfaces;
using UnityEditor;
using UnityEngine;

namespace Desire.Gameplay
{
    class BootstrapScene : MonoBehaviour
    {
        [SerializeField] private SceneAsset commonsScene;
        [SerializeField] private SceneAsset startScene;

        private void Start()
        {
            ServiceLocator.Global.TryGet(out ISceneController sceneController);
            if (sceneController == null) return;
            sceneController.SwitchScene(startScene);
            sceneController.AddScene(commonsScene);
        }
    }
}
