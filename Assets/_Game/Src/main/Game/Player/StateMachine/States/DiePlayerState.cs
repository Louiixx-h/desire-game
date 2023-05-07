namespace Desire.Game.Player.StateMachine.States
{
    public class DiePlayerState : BaseStatePlayer
    {
        public DiePlayerState(PlayerBehaviour playerBehaviour) : base(playerBehaviour, "Death"){}

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play(Name);
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