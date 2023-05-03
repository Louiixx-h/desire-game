using _Game.Src.Game.Player.StateMachine.States;

namespace _Game.Src.Game.Player.StateMachine
{
    public interface IStateMachineContext
    {
        public IState CurrentState { get; protected set; }

        public void SwitchState(IState newState);
    }
}