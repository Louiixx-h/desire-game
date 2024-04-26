
using Desire.Scripts.Game.Behaviours;
using System;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class TakeHitEnemyState : BaseStateEnemy
    {
        private readonly Rigidbody2D _rigidbody2D;
        private readonly AnimationHandler _animationHandler;
        private Vector2 _force;
        private bool _alreadyAddImpulse;
        
        public TakeHitEnemyState(BaseEnemy enemy, Vector2 force, AnimationHandler animationHandler, Rigidbody2D rigidbody2D) : base(enemy, "Take Hit")
        {
            _rigidbody2D = rigidbody2D;
            _force = force;
            _animationHandler = animationHandler;
        }

        public override void StartState()
        {
            _alreadyAddImpulse = false;
            _rigidbody2D.velocity = Vector2.zero;
            _animationHandler.Play(Name);
        }

        public override void FixedUpdateState(float deltaTime)
        {
            if (_alreadyAddImpulse) return;
            _rigidbody2D.AddForce(force: _force, ForceMode2D.Impulse);
            _alreadyAddImpulse = true;
        }

        public void SetForce(Vector2 force)
        {
            _force = force;
        }
    }
}