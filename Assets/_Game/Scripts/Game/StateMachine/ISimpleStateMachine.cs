namespace Desire.Game.StateMachine
{
    public interface ISimpleStateMachine
    {
        public IState CurrentState { get; protected set; }

        public void SwitchState(IState newState);
    }
}