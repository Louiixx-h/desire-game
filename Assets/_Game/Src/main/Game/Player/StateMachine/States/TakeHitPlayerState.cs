namespace Desire.Game.Player.StateMachine.States
{
    public class TakeHitPlayerState : BaseStatePlayer
    {
        public TakeHitPlayerState(PlayerBehaviour playerBehaviour) : base(playerBehaviour, "Take Hit"){}

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.PlayerAnimationHandler.IsFinished(0, Name))
            {
                Player.SwitchState(new IdlePlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime) {}
    }
}