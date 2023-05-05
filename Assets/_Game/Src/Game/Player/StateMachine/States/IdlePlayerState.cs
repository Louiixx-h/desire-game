using UnityEngine;

namespace Desire.Game.Player.StateMachine.States
{
    public class IdlePlayerState : BaseStatePlayer
    {
        public IdlePlayerState(PlayerBehaviour playerBehaviour)
        {
            Player = playerBehaviour;
            Name = "Idle";
        }

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play("Idle");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsAttack)
            {
                Player.SwitchState(new AttackPlayerState(Player,0));
                return;
            }
            
            if (Player.MovementDirection != Vector2.zero)
            {
                Player.SwitchState(new WalkPlayerState(Player));
                return;
            }
            
            Move(deltaTime);
        }

        public override void FixedUpdateState(float deltaTime) {}
    }
}