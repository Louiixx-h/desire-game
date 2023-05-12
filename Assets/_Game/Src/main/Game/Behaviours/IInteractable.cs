using System;

namespace Desire.Game.Behaviours
{
    public interface IInteractable
    {
        public void ShowInteraction();
        public void HideInteraction();
        public void DoInteraction();
    }
}