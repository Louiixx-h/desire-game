using Desire.Game.Commons;
using UnityEngine;

namespace Desire.Scripts.Game.Player.States
{
    public class BlockPlayerState : BaseStatePlayer
    {       
        public BlockPlayerState(PlayerBehaviour player): base(player, "Idle Block") {}

        public override void StartState()
        {
            Player.Rigidbody.velocity = Vector2.zero;
            Player.AnimationHandler.Play(Name);
        }

        public override void UpdateState(float deltaTime)
        {
            if (Player.IsBlockPressed)
            {
                return;
            }

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
                return;
            }

            Player.SwitchState(new IdlePlayerState(Player));
        }

        public override void FixedUpdateState(float deltaTime)
        {
            base.FixedUpdateState(deltaTime);
            if (!CanDoParry()) return;
            var colliders = Physics2D.OverlapBoxAll(point: Player.BlockPosition, Player.BlockSize, 0);
            if (colliders.Length == 0) return;
            foreach(var coll in colliders)
            {
                if (!coll.TryGetComponent(out IParryeable parryable)) continue;
                if (!parryable.IsVunerableToParry) continue;
                parryable.TakeParry();
            }
        }

        private bool CanDoParry()
        {
            return true;
        }
    }
}