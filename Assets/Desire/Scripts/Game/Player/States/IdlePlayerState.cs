using UnityEngine;

namespace Desire.Scripts.Game.Player.States
{
    public class IdlePlayerState : BaseStatePlayer
    {
        public IdlePlayerState(PlayerBehaviour player) : base(player, "Idle"){}

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