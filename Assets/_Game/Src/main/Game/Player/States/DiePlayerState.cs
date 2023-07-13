namespace Desire.Game.Player.States
{
    public class DiePlayerState : BaseStatePlayer
    {
        public DiePlayerState(PlayerBehaviour player) : base(player, "Death"){}

        public override void StartState()
        {
            Player.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (!Player.IsDead)
            {
                Player.SwitchState(new IdlePlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime);
        }
    }
}