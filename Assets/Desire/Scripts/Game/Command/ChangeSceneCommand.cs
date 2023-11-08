using Desire.Scripts.Game.Core;
using UnityEngine;

namespace Desire.Scripts.Game.Command
{
    [CreateAssetMenu(fileName = "Command", menuName = "ScriptableObjects/Command/Change Scene")]
    public class ChangeSceneCommand: ICommand
    {
        [SerializeField] private string sceneName;
        
        public override void Execute()
        {
            var levelManager = FindObjectOfType<LevelManager>();
            if (levelManager == null) return;
            if (levelManager.loadingScreen == null) return;
            levelManager.loadingScreen.LoadScene(sceneName: sceneName);
        }
    }
}