namespace Desire.Game.StateMachine
{
    public class SimpleStateMachine: ISimpleStateMachine
    {
        private IState _currentState;

        IState ISimpleStateMachine.CurrentState
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