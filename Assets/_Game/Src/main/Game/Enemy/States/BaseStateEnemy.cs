using Desire.Game.Player.StateMachine.States;
using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public abstract class BaseStateEnemy : IState
    {
        public string Name;
        protected EnemyBehaviour Enemy;
        
        protected BaseStateEnemy(EnemyBehaviour enemy, string name)
        {
            Enemy = enemy;
            Name = name;
        }
        
        public abstract void StartState();
        public abstract void EndState();
        public abstract void UpdateState(float deltaTime);
        public abstract void FixedUpdateState(float deltaTime);

        protected void Move(float deltaTime)
        {
            Move(deltaTime, Vector2.zero);
        }
        
        protected void Move(float deltaTime, Vector2 motion)
        {
            Enemy.Movement.Tick(deltaTime, motion);
        }
    }
}