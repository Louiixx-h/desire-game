namespace Desire.Scripts.Game.Enemy.States
{
    public class DieEnemyState : BaseStateEnemy
    {
        private float _waitTime = 5;
    
        public DieEnemyState(EnemyBehaviour enemy) : base(enemy, "Die"){}

        public override void StartState()
        {
            Enemy.Rigidbody.simulated = false;
            Enemy.Collider.enabled = false;
            Enemy.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            _waitTime -= deltaTime;
            if (_waitTime <= 0)
            {
                Enemy.Disappear();
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime);
        }
    }
}