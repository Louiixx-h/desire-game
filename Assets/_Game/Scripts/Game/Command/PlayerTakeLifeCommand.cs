using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Scripts.Game.Command
{
    [CreateAssetMenu(fileName = "Command", menuName = "ScriptableObjects/Command/Player Take Life Command")]
    public class PlayerTakeLifeCommand: ICommand
    {
        [SerializeField] private float lifeAmount;

        public override void Execute()
        {
            var gameObject = GameObject.FindWithTag("Player");
            if (!gameObject.TryGetComponent(out IHealth health)) return;
            health.TakeLife(lifeAmount);
        }
    }
}