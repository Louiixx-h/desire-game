using Desire.Game.Command;

namespace Desire.Game.Behaviours
{
    public interface IInteractable
    {
        public PlayerTakeLifeCommand Command { get; set; }
        public void ShowInteraction();
        public void HideInteraction();
    }
}