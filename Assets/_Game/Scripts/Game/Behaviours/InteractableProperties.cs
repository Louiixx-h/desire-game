using UnityEngine;

namespace Desire.Game.Behaviours.Interactable
{
    [CreateAssetMenu(fileName = "so_properties_interactable", menuName = "Properties/Interactable")]
    public class InteractableProperties : ScriptableObject
    {
        public string message;
        public string target;
    }
}