namespace Desire.Scripts.Game.Player.States
{
    public class FallPlayerState : BaseStatePlayer
    {
        public FallPlayerState(PlayerBehaviour player) : base(player, "Fall"){}
        
        public override void StartState()
        {
            Player.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsAttack && Player.Melee.IsReadyToAttack)
            {
                Player.SwitchState(new AttackPlayerState(Player));
                return;
            }

            if (Player.IsDash && Player.CanDash)
            {
                Player.SwitchState(new DashPlayerState(Player));
                return;
            }
            
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