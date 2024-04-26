using Desire.Game.StateMachine;

namespace Desire.Game.Enemy.States
{
    public abstract class BaseStateEnemy : IState
    {
        public string Name;
        protected BaseEnemy Context;
        
        protected BaseStateEnemy(BaseEnemy enemy, string name)
        {
            Context = enemy;
            Name = name;
        }
        
        public virtual void StartState() { }
        public virtual void EndState() { }
        public virtual void UpdateState(float deltaTime) { }
        public virtual void FixedUpdateState(float deltaTime) { }
    }
}