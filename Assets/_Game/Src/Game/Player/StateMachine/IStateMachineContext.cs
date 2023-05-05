using Desire.Game.Player.StateMachine.States;

namespace Desire.Game.Player.StateMachine
{
    public interface IStateMachineContext
    {
        public IState CurrentState { get; protected set; }

        public void SwitchState(IState newState);
    }
}