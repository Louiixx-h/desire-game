namespace Desire.Game.StateMachine
{
    public interface IState
    {
        public void StartState();
        public void EndState();
        public void UpdateState(float deltaTime);
        public void FixedUpdateState(float deltaTime);
    }
}