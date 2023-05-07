 using System.Collections;
 using Desire.Game.Behaviours;
 using UnityEngine;

 namespace Desire.Game.AI
 {
     public class AIBoss : MonoBehaviour, IDamageable
     {
         [SerializeField] SpriteRenderer spriteRenderer;
         [SerializeField] ParticleSystem particleDeath;
         [SerializeField] [Range(1, 20)] float moveSpeed;
         [SerializeField] [Range(1, 60)] float damage = 30;

         [HideInInspector]
         public delegate void OnDeathDelegate();

         [HideInInspector] public event OnDeathDelegate OnDeath;

         float maxLife = 100;
         float currentLife = 0;
         float takeHitCooldown = 0.2f;

         bool isDeath = false;
         bool isAttacking = false;
         bool isRunning = false;
         bool canTakeHit = true;
         bool isWaiting = true;

         Animator animator;
         Rigidbody2D rb;
         GameObject target;

         Vector3 currentPosition;
         Vector3 targetPosition;

         void Start()
         {
             animator = GetComponent<Animator>();
             rb = GetComponent<Rigidbody2D>();

             target = GameObject.FindWithTag("Player");
             HealthManager(maxLife);
         }

         void FixedUpdate()
         {
             if (currentLife <= 0)
             {
                 DeathState();
                 return;
             }

             if (isDeath || isWaiting) return;
             currentPosition = transform.position;
             targetPosition = target.transform.position;

             if (Vector2.Distance(currentPosition, targetPosition) <= 1.5f)
             {
                 AttackState();
                 return;
             }

             isAttacking = false;
             FollowState();
         }

         public void Fight()
         {
             isWaiting = false;
         }

         void FollowState()
         {
             if (!isRunning)
             {
                 animator.Play("Run");
                 isRunning = true;
             }

             var direction = (currentPosition - targetPosition).normalized * -1;

             rb.MovePosition(
                 rb.transform.position +
                 direction *
                 moveSpeed *
                 Time.deltaTime
             );

             if (direction.x > 0) transform.localScale = new Vector3(1, 1, 1);
             if (direction.x < 0) transform.localScale = new Vector3(-1, 1, 1);
         }

         void AttackState()
         {
             if (isAttacking) return;
             isAttacking = true;
             isRunning = false;
             animator.Play("Attack1");
         }

         public void Attack()
         {
         }

         public void EndAttack()
         {
             isAttacking = false;
             animator.Play("Idle");
         }

         public void TakeDamage(float value)
         {
             if (isDeath & !canTakeHit) return;
             HealthManager(value);
         }

         void DeathState()
         {
             if (isDeath) return;
             isDeath = true;
             rb.velocity = Vector2.zero;
             animator.Play("Death");
             particleDeath.gameObject.SetActive(true);
             OnDeath.Invoke();
             StartCoroutine(Disappear());
         }

         IEnumerator Disappear()
         {
             yield return new WaitForSeconds(2f);
             Destroy(gameObject);
             yield return null;
         }

         IEnumerator TakeHitCooldown()
         {
             yield return new WaitForSeconds(takeHitCooldown);
             canTakeHit = true;
             yield return null;
         }

         public void HealthManager(float value)
         {
             currentLife += value / maxLife;
             canTakeHit = false;
             StartCoroutine(TakeHitCooldown());
         }
     }
 }