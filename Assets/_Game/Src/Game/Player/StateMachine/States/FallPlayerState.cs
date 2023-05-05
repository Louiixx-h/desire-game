namespace Desire.Game.Player.StateMachine.States
{
    public class FallPlayerState : BaseStatePlayer
    {
        public FallPlayerState(PlayerBehaviour playerBehaviour) : base(playerBehaviour, "Fall"){}
        
        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.CheckGround.IsGrounded())
            {
                Player.SwitchState(new IdlePlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime, Player.MovementDirection);
        }
    }
}