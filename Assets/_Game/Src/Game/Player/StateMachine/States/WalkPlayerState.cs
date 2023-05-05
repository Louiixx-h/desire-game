using UnityEngine;

namespace Desire.Game.Player.StateMachine.States
{
    public class WalkPlayerState : BaseStatePlayer
    {
        public WalkPlayerState(PlayerBehaviour playerBehaviour): base(playerBehaviour, "Walk"){}

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play("Run");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsAttack && Player.Attacks.Count > 0)
            {
                Player.SwitchState(new AttackPlayerState(Player,0));
                return;
            }
            
            if (Player.MovementDirection == Vector2.zero)
            {
                Player.SwitchState(new IdlePlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            if (Player.IsJump && Player.CheckGround.IsGrounded())
            {
                Player.Movement.Jump();
            }
            
            Move(deltaTime, Player.MovementDirection);
        }
    }
}