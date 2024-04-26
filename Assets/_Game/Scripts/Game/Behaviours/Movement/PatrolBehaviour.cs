using UnityEngine;

namespace Desire.Game.Enemy.Behaviours
{
    public class PatrolBehaviour
    {
        private readonly Transform _transform;
        private readonly Vector2 _startPoint;
        private readonly Vector2 _endPoint;
        private Vector2 _direction;

        public PatrolBehaviour(
            Transform transform,
            Vector2 startPoint, 
            Vector2 endPoint)
        {
            _transform = transform;
            _startPoint = startPoint;
            _endPoint = endPoint;
        }

        public void StartPatrol()
        {
            Vector3 direction;
            var position = (Vector2) _transform.position;
            var pointA = _startPoint;
            var pointB = _endPoint;
            var distanceFromPointA = Vector2.Distance(position, pointA);
            var distanceFromPointB = Vector2.Distance(position, pointB);

            if (distanceFromPointA < distanceFromPointB)
            {
                direction = (pointA - position).normalized;
            }
            else
            {
                direction = (pointB - position).normalized;
            }

            _direction = new Vector2(direction.x, 0);
        }

        public void Tick(out Vector2 movementDirection)
        {
            Vector3 direction;
            var position = (Vector2) _transform.position;
            var pointA = _startPoint;
            var pointB = _endPoint;

            if (IsOnPointA())
            {
                direction = (pointB - position).normalized;
                movementDirection = new Vector2(direction.x, 0);
                _direction = movementDirection;
                return;
            }

            if (IsOnPointB())
            {
                direction = (pointA - position).normalized;
                movementDirection = new Vector2(direction.x, 0);
                _direction = movementDirection;
                return;
            }

            movementDirection = _direction;
        }

        private bool IsOnPointA()
        {
            var position = _transform.position;
            var pointA = _startPoint;
            return Vector3.Distance(position, pointA) <= 1f;
        }

        private bool IsOnPointB()
        {
            var position = _transform.position;
            var pointB = _endPoint;
            return Vector3.Distance(position, pointB) <= 1f;
        }
    }
}