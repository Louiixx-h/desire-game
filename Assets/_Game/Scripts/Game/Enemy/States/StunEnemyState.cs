using Desire.Game.Commons;

namespace Desire.Game.Enemy.States
{
    public class StunEnemyState : BaseStateEnemy
    {
        private readonly IParryeable _parryeable;
        private float _timeStun;

        private const float StunCooldown = 2;

        public StunEnemyState(BaseEnemy enemy, IParryeable parryeable) : base(enemy, "Stun") 
        {
            _parryeable = parryeable;
        }

        public override void StartState()
        {
            base.StartState();
            _timeStun = StunCooldown;
        }

        public override void UpdateState(float deltaTime)
        {
            base.UpdateState(deltaTime);
            _timeStun -= deltaTime;
            if (_timeStun <= 0)
            {
                _parryeable.WasParried = false;
            }
        }
    }
}
