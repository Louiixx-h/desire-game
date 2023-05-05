using Desire.Game.Player.StateMachine.States;

namespace Desire.Game.Player.StateMachine
{
    public class StateMachineContext: IStateMachineContext
    {
        private IState _currentState;

        IState IStateMachineContext.CurrentState
        {
            get => _currentState;
            set => _currentState = value;
        }

        public void SwitchState(IState newState)
        {
            _currentState?.EndState();
            _currentState = newState;
            _currentState?.StartState();
        }
    }
}