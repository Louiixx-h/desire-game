using Desire.Game.StateMachine;
using UnityEngine;

namespace Desire.Scripts.Game.Player.States
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
        
        public virtual void StartState() { }
        public virtual void EndState() { }
        public virtual void UpdateState(float deltaTime) { }
        public virtual void FixedUpdateState(float deltaTime) { }

        protected void Move(float deltaTime)
        {
            Move(deltaTime, Vector2.zero);
        }
        
        protected void Move(float deltaTime, Vector2 motion)
        {            
            Player.Movement.Tick(deltaTime, motion);
        }
    }
}