using UnityEngine;

namespace Desire.Scripts.Game.Enemy
{
    public interface IPatrolArea
    {
        public Vector3 GetStartPoint();
        public Vector3 GetEndPoint();
    }
}