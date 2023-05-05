namespace Desire.Game.Player.StateMachine.States
{
    public class JumpPlayerState : BaseStatePlayer
    {
        public JumpPlayerState(PlayerBehaviour playerBehaviour) : base(playerBehaviour, "Jump"){}

        public override void StartState()
        {
            Player.Movement.Jump();
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime) {}

        public override void FixedUpdateState(float deltaTime) {}
    }
}