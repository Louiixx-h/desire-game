using UnityEngine;

namespace Desire.Game.Player.StateMachine.States
{
    public class AttackPlayerState : BaseStatePlayer
    {
        public AttackPlayerState(PlayerBehaviour playerBehaviour): base(playerBehaviour, "Attack") {}

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play(Player.WeaponConfig.nameAnimation);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.PlayerAnimationHandler.IsFinished(0, Player.WeaponConfig.tagAnimation))
            {
                Player.SwitchState(new IdlePlayerState(Player));
                return;
            }
            
            Move(Time.deltaTime);
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Player.Melee.DoDamage();
        }
    }
}