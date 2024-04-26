using UnityEngine;

namespace Desire.Scripts.Game.Player.States
{
    public class WalkPlayerState : BaseStatePlayer
    {
        public WalkPlayerState(PlayerBehaviour player): base(player, "Run") {}

        public override void StartState()
        {
            Player.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsBlockPressed)
            {
                Player.SwitchState(new BlockPlayerState(Player));
                return;
            }

            if (Player.IsDash && Player.CanDash)
            {
                Player.SwitchState(new DashPlayerState(Player));
                return;
            }
            
            if (Player.IsAttack && Player.Melee.IsReadyToAttack)
            {
                Player.SwitchState(new AttackPlayerState(Player));
                return;
            }
            
            if (Player.MovementDirection == Vector2.zero)
            {
                Player.SwitchState(new IdlePlayerState(Player));
                return;
            }
            
            if (Player.IsJump && Player.CheckGround.IsGrounded())
            {
                Player.SwitchState(new JumpPlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime, Player.MovementDirection);
        }
    }
}