using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public class Movement
    {
        private readonly Rigidbody2D _rigidbody;
        private readonly SpriteRenderer _sprite;
        private readonly float _movementSpeed;
        private readonly float _jumpForce;
        private readonly bool _right;
        
        public Movement(
            SpriteRenderer sprite, 
            float movementSpeed, 
            Rigidbody2D rigidbody, 
            float jumpForce,
            bool right = true
        )
        {
            _rigidbody = rigidbody;
            _movementSpeed = movementSpeed;
            _sprite = sprite;
            _jumpForce = jumpForce;
            _right = right;
        }
        
        public void Tick(float deltaTime, Vector2 motion)
        {
            _rigidbody.velocity = new Vector2(motion.x * _movementSpeed, _rigidbody.velocity.y);

            _sprite.flipX = motion.x switch
            {
                > 0 => _right,
                < 0 => !_right,
                _ => _sprite.flipX
            };
        }

        public void Jump()
        {
            _rigidbody.AddForce(Vector2.up * (_jumpForce * _jumpForce));
        }
    }
}