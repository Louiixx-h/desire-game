using UnityEngine;

namespace Desire.Scripts.Game.Player.States
{
    public class DashPlayerState : BaseStatePlayer
    {
        private float _gravityScale;
        
        public DashPlayerState(PlayerBehaviour player) : base(player, "Run"){}

        public override void StartState()
        {
            Player.AnimationHandler.Play(Name);
        }

        public override void EndState()
        {
            Player.DashCooldown = Player.DashTime;
            Player.Rigidbody.gravityScale = _gravityScale;
        }

        public override void UpdateState(float deltaTime)
        {
            Player.DashCooldown -= deltaTime;
            
            if (Player.DashCooldown <= 0)
            {
                Player.SwitchState(new IdlePlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            var rigidbody = Player.Rigidbody;
            _gravityScale = rigidbody.gravityScale;
            rigidbody.gravityScale = 0;
            rigidbody.velocity = new Vector2(Player.MovementDirection.normalized.x * Player.DashForce, 0);
        }
    }
}