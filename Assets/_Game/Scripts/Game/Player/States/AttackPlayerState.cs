using UnityEngine;

namespace Desire.Scripts.Game.Player.States
{
    public class AttackPlayerState : BaseStatePlayer
    {
        private bool _alreadyAttack;
        
        public AttackPlayerState(PlayerBehaviour player): base(player, "Attack") {}

        public override void StartState()
        {
            Player.AnimationHandler.Play(Player.WeaponConfig.nameAnimation);
        }

        public override void UpdateState(float deltaTime)
        {
            if (Player.AnimationHandler.IsFinished(0, Player.WeaponConfig.tagAnimation))
            {
                Player.SwitchState(new IdlePlayerState(Player));
                return;
            }
            
            Move(Time.deltaTime);
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime, Player.MovementDirection);

            if (_alreadyAttack) return;
            if (!Player.CanDoDamage) return;
            
            Player.Melee.DoDamage(Player.transform.position);

            Player.CanDoDamage = false;
            _alreadyAttack = true;
        }
    }
}