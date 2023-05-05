namespace Desire.Game.Player.StateMachine.States
{
    public class JumpPlayerState : BaseStatePlayer
    {
        public JumpPlayerState(PlayerBehaviour playerBehaviour) : base(playerBehaviour, "Jump"){}

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (!Player.CheckGround.IsGrounded())
            {
                Player.SwitchState(new FallPlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            if (!Player.IsJump || !Player.CheckGround.IsGrounded()) return;
            
            Player.Movement.Jump();
        }
    }
}