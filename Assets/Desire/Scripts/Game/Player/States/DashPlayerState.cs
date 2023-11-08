using System.Collections;
using UnityEngine;

namespace Desire.Scripts.Game.Player.States
{
    public class DashPlayerState : BaseStatePlayer
    {
        private bool _isDashFinished;
        private float _gravityScale;
        
        public DashPlayerState(PlayerBehaviour player) : base(player, "Dash"){}

        public override void StartState()
        {
            Player.Collider.isTrigger = true;
            _gravityScale = Player.Rigidbody.gravityScale;
            Player.AnimationHandler.Play(Name);
        }

        public override void EndState()
        {
            Player.Collider.isTrigger = false;
        }

        public override void UpdateState(float deltaTime)
        {
            if (_isDashFinished)
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
            Player.Rigidbody.velocity = new Vector2(Player.MovementDirection.normalized.x * Player.DashForce, 0);
            yield return new WaitForSeconds(Player.DashCooldown);
            Player.Rigidbody.gravityScale = _gravityScale;
            Player.CanDash = false;
            _isDashFinished = true;
        }
    }
}