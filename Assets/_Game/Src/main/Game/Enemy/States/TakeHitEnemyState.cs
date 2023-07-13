namespace Desire.Game.Enemy.States
{
    public class TakeHitEnemyState : BaseStateEnemy
    {
        public TakeHitEnemyState(EnemyBehaviour enemy) : base(enemy, "Take Hit"){}

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

        public override void FixedUpdateState(float deltaTime) {}
    }
}