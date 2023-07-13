using UnityEngine;

namespace Desire.Game.Enemy.States
{
    public class PatrolEnemyState : BaseStateEnemy
    {
        public PatrolEnemyState(EnemyBehaviour enemy): base(enemy, "Patrol"){}

        public override void StartState()
        {
            Enemy.MovementDirection = new Vector2(1, 0);
            Enemy.AnimationHandler.Play("Run");
        }

        public override void EndState() {}

        public override void UpdateState(float deltaTime)
        {
            if (Enemy.IsAttack)
            {
                Enemy.SwitchState(new AttackEnemyState(Enemy));
                return;
            }
            
            if (Enemy.MovementDirection == Vector2.zero)
            {
                Enemy.SwitchState(new IdleEnemyState(Enemy));
            }
        }

        public override void FixedUpdateState(float deltaTime)
        {
            CheckEndPoint(deltaTime);
        }
        
        private void CheckEndPoint(float deltaTime)
        {
            var direction = new Vector2(Enemy.MovementDirection.x, 0);
            bool hit = Physics2D.Raycast(Enemy.transform.position, direction, Enemy.Distance, Enemy.WhatIsEndPoint);
            
            if(!hit) return;

            Enemy.MovementDirection = new Vector2(Enemy.MovementDirection.x * -1, 0);
            Move(deltaTime, Enemy.MovementDirection);
        }
    }
}