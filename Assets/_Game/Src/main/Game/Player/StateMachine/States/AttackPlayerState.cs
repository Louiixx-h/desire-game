using Desire.Game.Behaviours.Combat;
using UnityEngine;

namespace Desire.Game.Player.StateMachine.States
{
    public class AttackPlayerState : BaseStatePlayer
    {
        private readonly Attack _currentAttack;
        
        public AttackPlayerState(PlayerBehaviour playerBehaviour, int indexAttack): base(playerBehaviour, "Attack")
        {
            _currentAttack = Player.Attacks[indexAttack];
        }

        public override void StartState()
        {
            Player.PlayerAnimationHandler.Play(_currentAttack.animationName);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Player.PlayerAnimationHandler.IsFinished(0, "Attack"))
            {
                Player.SwitchState(new IdlePlayerState(Player));
                return;
            }
            
            Move(Time.deltaTime);
        }

        public override void FixedUpdateState(float deltaTime) {}
    }
}