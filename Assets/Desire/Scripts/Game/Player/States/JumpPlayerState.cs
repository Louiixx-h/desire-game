namespace Desire.Scripts.Game.Player.States
{
    public class JumpPlayerState : BaseStatePlayer
    {
        public JumpPlayerState(PlayerBehaviour player) : base(player, "Jump"){}

        public override void StartState()
        {
            Player.AnimationHandler.Play(Name);
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