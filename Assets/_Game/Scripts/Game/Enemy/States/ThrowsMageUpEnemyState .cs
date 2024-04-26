using Desire.Scripts.Game.Behaviours;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class ThrowsMageUpEnemyState : BaseStateEnemy
    {
        private readonly MovementBehaviour _movement;
        
        public ThrowsMageUpEnemyState(BaseEnemy enemy, MovementBehaviour movement) : base(enemy, "Cast") 
        {
            _movement = movement;
        }

        public override void StartState()
        {
            Context.AnimationHandler.Play(Name);
        }

        public override void UpdateState(float deltaTime)
        {
            _movement.Tick(Time.deltaTime, Vector2.zero);
        }
    }
}