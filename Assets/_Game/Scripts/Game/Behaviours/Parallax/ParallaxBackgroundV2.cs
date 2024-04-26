using UnityEngine;

namespace Assets._Game.Scripts.Game.Behaviours.Parallax
{
    [ExecuteInEditMode]
    class ParallaxBackgroundV2 : MonoBehaviour
    {
        [SerializeField] private Vector2 parallaxEffectMultiplier;
        [SerializeField] private bool infiniteHorizontal;
        [SerializeField] private bool infiniteVertical;

        private Transform _camerTransform;
        private Vector3 _lastCameraPosition;
        private float _textureUnitSizeX;
        private float _textureUnitSizeY;

        private void Start()
        {
            _camerTransform = Camera.main.transform;
            _lastCameraPosition = _camerTransform.position;
            var sprite = GetComponent<SpriteRenderer>().sprite;
            var texture = sprite.texture;
            _textureUnitSizeX = texture.width / sprite.pixelsPerUnit;
            _textureUnitSizeY = texture.height / sprite.pixelsPerUnit;
        }

        private void LateUpdate()
        {
            Vector3 deltaMovement = _camerTransform.position - _lastCameraPosition;
            transform.position += new Vector3(x: deltaMovement.x * parallaxEffectMultiplier.x, y: deltaMovement.y * parallaxEffectMultiplier.y);
            _lastCameraPosition = _camerTransform.position;

            if (infiniteHorizontal) {
                if (Mathf.Abs(_camerTransform.position.x - transform.position.x) >= _textureUnitSizeX)
                {
                    var offsetPositionX = (_camerTransform.position.x - transform.position.x) % _textureUnitSizeX;
                    transform.position = new Vector3(_camerTransform.position.x + offsetPositionX, transform.position.y);
                }
            }

            if (infiniteVertical) {
                if (Mathf.Abs(_camerTransform.position.y - transform.position.y) >= _textureUnitSizeX)
                {
                    var offsetPositionY = (_camerTransform.position.y - transform.position.y) % _textureUnitSizeY;
                    transform.position = new Vector3(transform.position.x, _camerTransform.position.y + offsetPositionY);
                }
            }
        }
    }
}
