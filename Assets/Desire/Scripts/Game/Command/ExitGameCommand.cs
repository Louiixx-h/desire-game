using UnityEngine;

namespace Desire.Scripts.Game.Command
{
    [CreateAssetMenu(fileName = "Command", menuName = "ScriptableObjects/Command/Exit Game")]
    public class ExitGameCommand : ICommand
    {
        public override void Execute()
        {
            Application.Quit();
        }
    }
}