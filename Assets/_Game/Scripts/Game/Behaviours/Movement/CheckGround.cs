using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public class CheckGround
    {
        private readonly Transform _groundPosition;
        private readonly float _radius;
        private readonly LayerMask _groundLayer;
        
        public CheckGround(Transform groundPosition, float radius, LayerMask groundLayer)
        {
            _groundPosition = groundPosition;
            _radius = radius;
            _groundLayer = groundLayer;
        }
        
        public bool IsGrounded()
        {
            return Physics2D.OverlapCircle(_groundPosition.position, _radius, _groundLayer);
        }
    }
}