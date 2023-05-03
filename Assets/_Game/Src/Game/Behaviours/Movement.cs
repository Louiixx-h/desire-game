using UnityEngine;

namespace _Game.Src.Game.Behaviours
{
    public class Movement
    {
        private readonly Rigidbody2D _rigidbody;
        private readonly float _movementSpeed;
        private readonly SpriteRenderer _sprite;
        
        public Movement(SpriteRenderer sprite, float movementSpeed, Rigidbody2D rigidbody)
        {
            _rigidbody = rigidbody;
            _movementSpeed = movementSpeed;
            _sprite = sprite;
        }

        public void Tick(float deltaTime)
        {
            Tick(deltaTime, Vector2.zero);
        }
        
        public void Tick(float deltaTime, Vector2 motion)
        {
            _rigidbody.velocity = new Vector2(motion.x * _movementSpeed * deltaTime, _rigidbody.velocity.y);

            if (motion.x > 0)
            {
                _sprite.flipX = true;
            }
            if (motion.x < 0)
            {
                _sprite.flipX = false;
            }
        }
    }
}