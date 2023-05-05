using UnityEngine;

namespace Desire.Game.Player.StateMachine.States
{
    public abstract class BaseStatePlayer : IState
    {
        public string Name;
        protected PlayerBehaviour Player;
        
        protected BaseStatePlayer(PlayerBehaviour player, string name)
        {
            Player = player;
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
            Player.Movement.Tick(deltaTime, motion);
        }

        protected void Jump()
        {
            Player.Movement.Jump();
        }
    }
}