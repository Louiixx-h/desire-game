using System.Collections;
using UnityEngine;

namespace Desire.Scripts.Game.Player.States
{
    public class DashPlayerState : BaseStatePlayer
    {
        private float _gravityScale;
        
        public DashPlayerState(PlayerBehaviour player) : base(player, "Dash"){}

        public override void StartState()
        {
            _gravityScale = Player.Rigidbody.gravityScale;
            Player.IsIgnoringDamage = true;
            Player.AnimationHandler.Play(Name);
        }

        public override void EndState()
        {
            Player.IsIgnoringDamage = false;
            Player.Collider.isTrigger = false;
        }

        public override void UpdateState(float deltaTime)
        {
            if (Player.AnimationHandler.IsFinished(0, tag: Name))
            {
                Player.SwitchState(new IdlePlayerState(Player));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Player.StartCoroutine(DashCoroutines());
        }

        private IEnumerator DashCoroutines()
        {
            Player.Rigidbody.velocity = new Vector2(Player.MovementDirection.normalized.x * Player.DashForce, Player.Rigidbody.velocity.y);
            yield return new WaitForSeconds(Player.DashCooldown);
            Player.Rigidbody.gravityScale = _gravityScale;
            Player.CanDash = false;
        }
    }
}