using Desire.Scripts.Game.Command;

namespace Desire.Scripts.Game.Behaviours
{
    public interface IInteractable
    {
        public ICommand Command { get; set; }
        public void ShowInteraction();
        public void HideInteraction();
    }
}