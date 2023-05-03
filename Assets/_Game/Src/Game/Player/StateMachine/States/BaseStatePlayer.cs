using UnityEngine;

namespace _Game.Src.Game.Player.StateMachine.States
{
    public abstract class BaseStatePlayer : IState
    {
        protected string Name;
        protected PlayerBehaviour Player;
        
        public abstract void StartState();
        public abstract void EndState();
        public abstract void UpdateState(float deltaTime);
        public abstract void FixedUpdateState(float deltaTime);

        protected void Move(float deltaTime)
        {
            Player.Movement.Tick(deltaTime);
        }
        
        protected void Move(float deltaTime, Vector2 motion)
        {            
            Player.Movement.Tick(deltaTime, motion);
        }
    }
}