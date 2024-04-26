using UnityEngine;

namespace Desire.Game.Behaviours
{
    public class PatrolAreaBehaviour : MonoBehaviour
    {
        [field:SerializeField] public Transform StartPoint { get; private set; }
        [field:SerializeField] public Transform EndPoint { get; private set; }
    }
}