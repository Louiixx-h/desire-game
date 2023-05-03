using UnityEngine;

namespace _Game.Src.Game.Player.StateMachine.States
{
    public class WalkPlayerState : BaseStatePlayer
    {
        public WalkPlayerState(PlayerBehaviour playerBehaviour)
        {
            Player = playerBehaviour;
            Name = "Walk";
        }

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play("Run");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsAttack)
            {
                //Player.SwitchState(new AttackPlayerState(Player,0));
                return;
            }
            
            if (Player.MovementDirection == Vector2.zero)
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