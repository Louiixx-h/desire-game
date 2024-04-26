using AlienWaves.CoreDI;
using Desire.Game.Commons.Interfaces;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Desire.Scripts.Game.Command
{
    [CreateAssetMenu(fileName = "Command", menuName = "ScriptableObjects/Command/Change Scene")]
    public class ChangeSceneCommand: ICommand
    {
        [SerializeField] private SceneAsset scene;
        [SerializeField] private LoadSceneMode loadSceneMode;
        
        public override void Execute()
        {
            ServiceLocator.Global.TryGet(out ISceneController sceneController);
            if (sceneController == null) return;
            switch (loadSceneMode)
            {
                case LoadSceneMode.Single:
                    sceneController.SwitchScene(scene);
                    break;
                case LoadSceneMode.Additive:
                    sceneController.AddScene(scene);
                    break;
            }
        }
    }
}