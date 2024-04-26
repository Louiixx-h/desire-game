using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public class Parallax : MonoBehaviour
    {
        [SerializeField] private float parallaxSpeed;

        private float _length;
        private float _startPosition;
        private Transform _cameraTransform;

        private void Start()
        {
            _startPosition = transform.position.x;
            _length = GetComponent<SpriteRenderer>().bounds.size.x;
            if (Camera.main != null) _cameraTransform = Camera.main.transform;
        }

        private void Update()
        {
            var cameraPosition = _cameraTransform.position;
            var reposition = cameraPosition.x * (1-parallaxSpeed);
            var distance = cameraPosition.x * parallaxSpeed;
            var position = transform.position;
            
            transform.position = new Vector3(_startPosition + distance, position.y, position.z);

            if (reposition > _startPosition + _length)
            {
                _startPosition += _length;
            }
            else if (reposition < _startPosition - _length)
            {
                _startPosition -= _length;
            }
        }
    }
}