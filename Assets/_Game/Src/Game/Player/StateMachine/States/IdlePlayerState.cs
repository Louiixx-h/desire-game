using UnityEngine;

namespace Desire.Game.Player.StateMachine.States
{
    public class IdlePlayerState : BaseStatePlayer
    {
        public IdlePlayerState(PlayerBehaviour playerBehaviour) : base(playerBehaviour, "Idle"){}

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play("Idle");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsAttack && Player.Attacks.Count > 0)
            {
                Player.SwitchState(new AttackPlayerState(Player,0));
                return;
            }
            
            if (Player.MovementDirection != Vector2.zero)
            {
                Player.SwitchState(new WalkPlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            if (Player.IsJump && Player.CheckGround.IsGrounded())
            {
                Player.Movement.Jump();
                return;
            }
            
            Move(deltaTime);
        }
    }
}