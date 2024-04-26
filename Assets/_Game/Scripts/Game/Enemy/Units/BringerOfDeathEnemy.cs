using Desire.Game.Enemy.States;
using Desire.Game.StateMachine;
using Desire.Scripts.Game.Behaviours;
using Desire.Game.Behaviours;
using Desire.Scripts.Game.Behaviours.Combat;
using UnityEngine;

namespace Desire.Game.Enemy
{
    public class BringerOfDeathEnemy : BaseEnemy, ISpellBehaviour
    {
        [Header("Movement")]
        [SerializeField] private float movementSpeed = 2;
        [SerializeField] private Rigidbody2D rb;

        [Range(0, 60)]
        [SerializeField] private float rangeVisionDistance;

        [Header("Combat")]
        [Range(0, 30)]
        [SerializeField] private float rangeAttackDistance;
        [SerializeField] private GameObject spellPrefabs;
        [SerializeField] private Transform weaponTransform;
        [SerializeField] private WeaponConfig weaponConfig;

        private IState _idleState;
        private IState _followState;
        private IState _takeHitState;
        private IState _dieState;
        private IState _attackState;
        private IState _throwsMageUpState;
        private Melee _melee;
        private bool _takeHit;
        private bool _dead;
        private MovementBehaviour _movement;

        protected override void Awake()
        {
            base.Awake();
            _melee = new Melee(weaponConfig, weaponTransform, weaponConfig.timeToAttack);
            _movement = new MovementBehaviour(movementSpeed, rb, 0);
            stateMachine = new StateMachineContext();
        }

        protected override void DefineStates()
        {
            base.DefineStates();
            _idleState = new IdleEnemyState(this, _movement);
            _followState = new FollowEnemyState(this, _movement);
            _takeHitState = new TakeHitEnemyState(this, Vector2.zero, AnimationHandler, rb);
            _dieState = new DieInstantEnemyState(this, _movement, rb);
            _attackState = new AttackEnemyState(this, weaponConfig, _movement, _melee);
            _throwsMageUpState = new ThrowsMageUpEnemyState(this, _movement);

            At(from: _idleState, to: _followState, condition: new FuncPredicate(() => FollowCondition()));
            At(from: _takeHitState, to: _followState, condition: new FuncPredicate(() => AnimationHandler.IsFinished(0, "Take Hit") & FollowCondition()));
            At(from: _attackState, to: _followState, condition: new FuncPredicate(() => FollowCondition() & AnimationHandler.IsFinished(0, weaponConfig.tagAnimation)));
            At(from: _throwsMageUpState, to: _followState, condition: new FuncPredicate(() => FollowCondition() && AnimationHandler.IsFinished(0, "Cast")));

            At(from: _followState, to: _idleState, condition: new FuncPredicate(() => IdleCondition()));
            At(from: _takeHitState, to: _idleState, condition: new FuncPredicate(() => AnimationHandler.IsFinished(0, "Take Hit") & IdleCondition()));
            At(from: _attackState, to: _idleState, condition: new FuncPredicate(() => AnimationHandler.IsFinished(0, weaponConfig.tagAnimation)));
            At(from: _throwsMageUpState, to: _idleState, condition: new FuncPredicate(() => AnimationHandler.IsFinished(0, "Cast") && IdleCondition()));

            At(from: _idleState, to: _attackState, condition: new FuncPredicate(AttackCondition));
            At(from: _followState, to: _attackState, condition: new FuncPredicate(AttackCondition));
            At(from: _takeHitState, to: _attackState, condition: new FuncPredicate(() => AnimationHandler.IsFinished(0, "Take Hit") && AttackCondition()));

            At(from: _idleState, to: _throwsMageUpState, condition: new FuncPredicate(() => ThrowsMageCondition()));

            At(from: _idleState, to: _takeHitState, condition: new FuncPredicate(() => _takeHit));
            At(from: _followState, to: _takeHitState, condition: new FuncPredicate(() => _takeHit));
            
            Any(to: _dieState, condition: new FuncPredicate(() => _dead));

            stateMachine.SetState(_idleState);
        }

        private bool ThrowsMageCondition()
        {
            var randomValue = Random.Range(0, 100);
            return randomValue < 20 & IsInRangeOfVision();
        }

        private bool FollowCondition()
        {
            return IsInRangeOfVision() && !IsInRangeOfAttack();
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

        public void ThrowsSpeel()
        {
            Instantiate(spellPrefabs, new Vector3(Player.transform.position.x, 2.536618f, Player.transform.position.z), Quaternion.identity);
        }

        private void OnTakeDamage(float currentLife, Vector2 force)
        {
            if (currentLife > 0)
            {
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

        // <summary>
        // This method is called by the animation event
        // </summary>
        public void DoDamage()
        {
            _melee.CanDoDamage = true;
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
