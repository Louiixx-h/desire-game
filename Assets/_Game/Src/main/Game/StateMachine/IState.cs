namespace Desire.Game.Player.StateMachine.States
{
    public interface IState
    {
        public void StartState();
        public void EndState();
        public void UpdateState(float deltaTime);
        public void FixedUpdateState(float deltaTime);
    }
}