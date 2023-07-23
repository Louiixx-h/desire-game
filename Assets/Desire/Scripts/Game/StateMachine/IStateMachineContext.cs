namespace Desire.Scripts.Game.StateMachine
{
    public interface IStateMachineContext
    {
        public IState CurrentState { get; protected set; }

        public void SwitchState(IState newState);
    }
}