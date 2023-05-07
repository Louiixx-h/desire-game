using UnityEngine;

namespace Desire.Game.Player.StateMachine.States
{
    public class IdlePlayerState : BaseStatePlayer
    {
        public IdlePlayerState(PlayerBehaviour playerBehaviour) : base(playerBehaviour, "Idle"){}

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsAttack)
            {
                Player.SwitchState(new AttackPlayerState(Player));
                return;
            }
            
            if (Player.MovementDirection != Vector2.zero)
            {
                Player.SwitchState(new WalkPlayerState(Player));
                return;
            }
            
            if (Player.IsJump && Player.CheckGround.IsGrounded())
            {
                Player.SwitchState(new JumpPlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime);
        }
    }
}