
using UnityEngine;

namespace Desire.Scripts.Game.Enemy.States
{
    public class TakeHitEnemyState : BaseStateEnemy
    {
        private readonly Vector2 _force;
        
        public TakeHitEnemyState(EnemyBehaviour enemy, Vector2 force) : base(enemy, "Take Hit")
        {
            _force = force;
        }

        public override void StartState()
        {
            Enemy.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.AnimationHandler.IsFinished(0, Name))
            {
                Enemy.SwitchState(new IdleEnemyState(Enemy));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Enemy.Rigidbody.AddForce(force: _force, ForceMode2D.Impulse);
        }
    }
}