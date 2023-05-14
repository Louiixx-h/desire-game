using Desire.Game.Player;
using UnityEngine;

namespace Desire.Game.Command
{
    [CreateAssetMenu(fileName = "Command", menuName = "ScriptableObjects/Command/Player Take Life Command")]
    public class PlayerTakeLifeCommand: ScriptableObject, ICommand
    {
        [SerializeField] private float lifeAmount;
        
        private PlayerBehaviour _player;

        public void Execute()
        {
            _player = FindObjectOfType<PlayerBehaviour>();
            _player.TakeLife(lifeAmount);
        }
    }
}