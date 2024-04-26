using Desire.Game.Behaviours;
using Desire.Game.Commons;
using Desire.Game.Enemy.Behaviours;
using Desire.Game.Enemy.States;
using Desire.Game.StateMachine;
using Desire.Scripts.Game.Behaviours;
using Desire.Scripts.Game.Behaviours.Combat;
using UnityEngine;

namespace Desire.Game.Enemy
{
    public class NormalEnemy : BaseEnemy, IParryeable
    {
        [Header("Movement")]
        [SerializeField] private float movementSpeed = 2;
        [SerializeField] private Rigidbody2D rb;

        [Header("Patrol")]
        [SerializeField] private PatrolAreaBehaviour patrolArea;
        [Range(0, 60)]
        [SerializeField] private float rangeVisionDistance;

        [Header("Combat")]
        [Range(0, 30)]
        [SerializeField] private float rangeAttackDistance;
        [SerializeField] private Transform weaponTransform;
        [SerializeField] private WeaponConfig weaponConfig;

        private PatrolBehaviour patrolBehaviour;
        private IState _stunState;
        private IState _patrolState;
        private IState _idleState;
        private IState _followState;
        private TakeHitEnemyState _takeHitState;
        private IState _dieState;
        private IState _attackState;
        private Melee _melee;
        private bool _takeHit;
        private bool _dead;
        private MovementBehaviour _movement;

        public bool WasParried { get; set; }
        public bool IsVunerableToParry { get; private set; }

        protected override void Awake()
        {
            base.Awake();
            _melee = new Melee(weaponConfig, weaponTransform, weaponConfig.timeToAttack);
            _movement = new MovementBehaviour(movementSpeed, rb, 0);
            stateMachine = new StateMachineContext();
            patrolBehaviour = new PatrolBehaviour(transform, patrolArea.StartPoint.position, patrolArea.EndPoint.position);
            stateMachine = new StateMachineContext();
        }

        protected override void DefineStates()
        {
            base.DefineStates();
            _stunState = new StunEnemyState(this, this);
            _patrolState = new PatrolEnemyState(this, patrolBehaviour, _movement);
            _idleState = new IdleEnemyState(this, _movement);
            _followState = new FollowEnemyState(this, _movement);
            _takeHitState = new TakeHitEnemyState(this, Vector2.zero, AnimationHandler, rb);
            _dieState = new DieInstantEnemyState(this, _movement, rb);
            _attackState = new AttackEnemyState(this, weaponConfig, _movement, _melee);

            At(from: _idleState, to: _patrolState, condition: new FuncPredicate(PatrolCondition));
            At(from: _followState, to: _patrolState, condition: new FuncPredicate(PatrolCondition));
            At(from: _attackState, to: _patrolState, condition: new FuncPredicate(() => PatrolCondition() & AnimationHandler.IsFinished(0, weaponConfig.tagAnimation)));
            At(from: _takeHitState, to: _patrolState, condition: new FuncPredicate(() => PatrolCondition() & !_takeHit));

            At(from: _idleState, to: _followState, condition: new FuncPredicate(FollowCondition));
            At(from: _patrolState, to: _followState, condition: new FuncPredicate(FollowCondition));
            At(from: _attackState, to: _followState, condition: new FuncPredicate(() => FollowCondition() & AnimationHandler.IsFinished(0, weaponConfig.tagAnimation)));
            At(from: _takeHitState, to: _followState, condition: new FuncPredicate(() => FollowCondition() & !_takeHit));

            At(from: _stunState, to: _idleState, condition: new FuncPredicate(() => !WasParried));
            At(from: _followState, to: _idleState, condition: new FuncPredicate(IdleCondition));
            At(from: _patrolState, to: _idleState, condition: new FuncPredicate(IdleCondition));
            At(from: _attackState, to: _idleState, condition: new FuncPredicate(IdleCondition));
            At(from: _takeHitState, to: _idleState, condition: new FuncPredicate(() => IdleCondition() & !_takeHit));

            At(from: _idleState, to: _attackState, condition: new FuncPredicate(AttackCondition));
            At(from: _followState, to: _attackState, condition: new FuncPredicate(AttackCondition));
            At(from: _patrolState, to: _attackState, condition: new FuncPredicate(AttackCondition));

            At(from: _attackState, to: _stunState, condition: new FuncPredicate(() => WasParried));

            Any(to: _takeHitState, condition: new FuncPredicate(() => _takeHit));
            Any(to: _dieState, condition: new FuncPredicate(() => _dead));

            stateMachine.SetState(_idleState);
        }

        private bool PatrolCondition()
        {
            return !IsInRangeOfVision() || Player.transform.position.x < patrolArea.StartPoint.position.x || Player.transform.position.x > patrolArea.EndPoint.position.x;
        }

        private bool FollowCondition()
        {
            return IsInRangeOfVision() && !IsInRangeOfAttack() && Player.transform.position.x > patrolArea.StartPoint.position.x && Player.transform.position.x < patrolArea.EndPoint.position.x;
        }

        private bool IdleCondition()
        {
            return IsInRangeOfVision() && IsInRangeOfAttack() && !_melee.IsReadyToAttack;
        }

        private bool AttackCondition()
        {
            return IsInRangeOfAttack() && IsInRangeOfVision() && _melee.IsReadyToAttack;
        }

        private void OnEnable()
        {
            health.OnTakeDamage += OnTakeDamage;
        }

        private void OnDisable()
        {
            health.OnTakeDamage -= OnTakeDamage;
        }

        protected override void Update()
        {
            base.Update();
            _melee.Update(Time.deltaTime);

            if (_takeHit && AnimationHandler.IsFinished(0, "Take Hit"))
            {
                _takeHit = false;
            }

            if (_movement.Direction != Vector2.zero)
            {
                transform.localScale = new Vector3(_movement.Direction.normalized.x, transform.localScale.y, transform.localScale.z);
            }
        }

        public void Move(float deltaTime)
        {
            Move(deltaTime, Vector2.zero);
        }

        public void Move(float deltaTime, Vector2 motion)
        {
            _movement.Tick(deltaTime, motion);
        }

        private void OnTakeDamage(float currentLife, Vector2 force)
        {
            if (currentLife > 0)
            {
                _takeHitState.SetForce(force);
                _takeHit = true;
                return;
            }
            DisableCollder();
            _dead = true;
        }

        public bool IsInRangeOfAttack()
        {
            if (IsPlayerNull) return false;
            var currentPosition = transform.position;
            var playerPosition = Player.transform.position;
            return Vector2.Distance(currentPosition, playerPosition) <= rangeAttackDistance;
        }

        public bool IsInRangeOfVision()
        {
            if (IsPlayerNull) return false;
            var currentPosition = transform.position;
            var playerPosition = Player.transform.position;
            return Vector2.Distance(currentPosition, playerPosition) <= rangeVisionDistance;
        }

        public void TakeParry()
        {
            WasParried = true;
        }

        // <summary>
        // This method is called by the animation event
        // </summary>
        public void DoDamage()
        {
            _melee.CanDoDamage = true;
        }

        // <summary>
        // This method is called by the animation event
        // </summary>
        public void EnableParry()
        {
            IsVunerableToParry = true;
        }

        // <summary>
        // This method is called by the animation event
        // </summary>
        public void DisableParry()
        {
            IsVunerableToParry = false;
        }

        private void OnDrawGizmos()
        {
            RangeDamageGizmos();
        }

        private void RangeDamageGizmos()
        {
            Gizmos.color = Color.red;
            Gizmos.DrawWireSphere(weaponTransform.position, weaponConfig.radius);
        }
    }
}
