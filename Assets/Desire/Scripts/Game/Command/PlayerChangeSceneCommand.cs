using UnityEngine;
using UnityEngine.SceneManagement;

namespace Desire.Scripts.Game.Command
{
    [CreateAssetMenu(fileName = "Command", menuName = "ScriptableObjects/Command/Player Change Scene Command")]
    public class PlayerChangeSceneCommand: ICommand
    {
        [SerializeField] private string sceneName;
        [SerializeField] private LoadSceneMode loadSceneMode;
        
        public override void Execute()
        {
            SceneManager.LoadScene(sceneName, loadSceneMode);
        }
    }
}