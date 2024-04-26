namespace Desire.Scripts.Game.Player.States
{
    public class TakeHitPlayerState : BaseStatePlayer
    {
        public TakeHitPlayerState(PlayerBehaviour player) : base(player, "Take Hit"){}

        public override void StartState()
        {
            Player.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.AnimationHandler.IsFinished(0, tag:Name))
            {
                Player.SwitchState(new IdlePlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime) {}
    }
}