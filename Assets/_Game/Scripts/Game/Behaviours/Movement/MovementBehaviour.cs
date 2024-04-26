using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public class MovementBehaviour
    {
        private readonly Rigidbody2D _rigidbody;
        private readonly float _movementSpeed;
        private readonly float _jumpForce;
        private Vector2 _direction;

        public Vector2 Direction => _direction;

        public MovementBehaviour(
            float movementSpeed, 
            Rigidbody2D rigidbody, 
            float jumpForce
        )
        {
            _rigidbody = rigidbody;
            _movementSpeed = movementSpeed;
            _jumpForce = jumpForce;
        }
        
        public void Tick(float deltaTime, Vector2 motion)
        {
            _direction = motion;
            _rigidbody.velocity = new Vector2(motion.x * _movementSpeed, _rigidbody.velocity.y);
        }

        public void Jump()
        {
            _rigidbody.AddForce(Vector2.up * (_jumpForce * _jumpForce));
        }
    }
}