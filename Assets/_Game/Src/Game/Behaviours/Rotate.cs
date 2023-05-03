using UnityEngine;

namespace _Project.Scripts.Game.Behaviours
{
    public class Rotate
    {
        private readonly Camera _camera;
        private readonly Transform _transform;
        
        public Rotate(Camera camera, Transform transform)
        {
            _camera = camera;
            _transform = transform;
        }

        public Vector3 CalculateRotation(float horizontal, float vertical, float deltaTime)
        {
            const int rotationSpeed = 10;
            var cameraAngle = _camera.transform.eulerAngles.y;
            var targetAngle = Mathf.Atan2(horizontal, vertical) * Mathf.Rad2Deg + cameraAngle;
            var direction = Quaternion.Euler(0, targetAngle, 0);
            var rotation = _transform.rotation;

            _transform.rotation = Quaternion.Slerp(rotation, direction, rotationSpeed * deltaTime);

            return direction * Vector3.forward;
        }
    }
}