using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class IdleEnemyState : BaseStateEnemy
    {
        private readonly MovementBehaviour _movement;

        public IdleEnemyState(BaseEnemy enemy, MovementBehaviour movement) : base(enemy, "Idle")
        {
            _movement = movement;
        }
        
        public override void StartState()
        {
            Context.AnimationHandler.Play(Name);
        }

        public override void FixedUpdateState(float deltaTime)
        {
            _movement.Tick(deltaTime, Vector2.zero);
        }
    }
}