using UnityEngine;

namespace Desire.Scripts.Game.Enemy
{
    public class PatrolArea : MonoBehaviour, IPatrolArea
    {
        [SerializeField] private Transform startPoint;
        [SerializeField] private Transform endPoint;
        
        public Vector3 GetStartPoint()
        {
            return startPoint.position;
        }

        public Vector3 GetEndPoint()
        {
            return endPoint.position;
        }
    }
}