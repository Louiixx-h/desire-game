namespace Desire.Game.Enemy.States
{
    public class DieEnemyState : BaseStateEnemy
    {
        public DieEnemyState(EnemyBehaviour enemy) : base(enemy, "Death"){}

        public override void StartState()
        {
            Enemy.AnimationHandler.Play(Name);
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (!Enemy.IsDead)
            {
                Enemy.SwitchState(new IdleEnemyState(Enemy));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            Move(deltaTime);
        }
    }
}