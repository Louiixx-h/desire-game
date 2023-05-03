using UnityEngine;

namespace _Game.Src.Game.Player
{
    [RequireComponent(typeof(Rigidbody2D))]
    public class PlayerController : GameManager<PlayerController>, IDamageable
    {
        [SerializeField] Animator animator;
        [SerializeField] SpriteRenderer spriteRenderer;
        [SerializeField] Transform groundPosition;
        [SerializeField] Transform ladderPosition;
        [SerializeField] LayerMask whatIsGround;
        [SerializeField] LayerMask whatIsLadder;
        [SerializeField] DoDamage doDamage;
        [SerializeField] float groundCheckerRadius;
        [SerializeField] [Range(1, 20)] float moveSpeed;

        Rigidbody2D rb;

        float jumpVelocity = 25f;
        float maxLife = 100;
        float currentLife = 0;
        float damage = 30;

        bool isAttacking = false;
        bool isDeath = false;
        bool isSleeping = true;
        bool Climbing = false;
        bool isWaiting = false;

        string parameterWalk = "isWalking";
        string parameterJump = "jump";

        Coroutine resetAttackCoroutine;

        void Start()
        {
            HealthManager(maxLife);
            rb = GetComponent<Rigidbody2D>();
        }

        private void FixedUpdate()
        {
            if (isSleeping || isWaiting) return;
            if (currentLife <= 0)
            {
                DeathState();
                return;
            }

            Move();
        }

        private void Update()
        {

            if (isDeath || isSleeping || isWaiting) return;
            Jump();
            HandleAttack();
            Climb();
        }

        public void AwakePlayer()
        {
            if (isSleeping)
            {
                animator.Play("Raise");
                return;
            }

            if (isWaiting)
            {
                animator.Play("Idle");
                isWaiting = false;
                return;
            }

        }

        public void EndRaiseAnimation()
        {
            isSleeping = false;
            animator.Play("Idle");
        }

        public void Sleep()
        {
            rb.velocity = Vector2.zero;
            isSleeping = true;
            animator.Play("Crouching");
        }

        public void Waiting()
        {
            rb.velocity = Vector2.zero;
            isWaiting = true;
            animator.Play("Idle");
        }

        void Move()
        {
            float velocityHorizontal = Input.GetAxisRaw("Horizontal") * moveSpeed;
            float velocityVertical = rb.velocity.y;
            Vector3 velocity = new Vector3(velocityHorizontal, velocityVertical, 0);

            rb.velocity = velocity;
            Flip(velocity.x);

            if (isAttacking) return;

            if (velocity.x != 0) animator.SetBool(parameterWalk, true);
            else animator.SetBool(parameterWalk, false);
        }

        void Flip(float direction)
        {
            if (direction > 0) transform.localScale = new Vector3(1, 1, 1);
            if (direction < 0) transform.localScale = new Vector3(-1, 1, 1);
        }

        void Jump()
        {
            if (Input.GetKeyDown(KeyCode.Space) && IsGrounded())
            {
                rb.velocity = Vector2.up * jumpVelocity;
                animator.SetTrigger(parameterJump);
            }
        }

        bool IsGrounded()
        {
            Collider2D coll = Physics2D.OverlapCircle(
                groundPosition.position,
                groundCheckerRadius,
                whatIsGround
            );
            return coll != null;
        }

        void HandleAttack()
        {
            if (Input.GetMouseButtonDown(0) && IsGrounded() && !isAttacking)
            {
                if (resetAttackCoroutine != null) StopCoroutine(resetAttackCoroutine);
                isAttacking = true;
                animator.Play("Attack1");
            }
        }

        public void Attack()
        {
            doDamage.Attack(damage);
        }

        public void EndAttack()
        {
            isAttacking = false;
            animator.Play("Idle");
        }

        void DeathState()
        {
            if (isDeath) return;
            isDeath = true;
            animator.SetTrigger("death");
            rb.velocity = Vector2.zero;
            UiManager.Instance.uiGameOver.Show();
        }

        void Climb()
        {
            RaycastHit2D ray = Physics2D.Raycast(
                ladderPosition.position,
                Vector2.up,
                1.5f,
                whatIsLadder
            );
            if (ray.collider != null)
            {
                if (Climbing)
                {
                    float velocityVertical = Input.GetAxisRaw("Vertical") * moveSpeed;
                    rb.velocity = new Vector3(
                        rb.velocity.x,
                        velocityVertical,
                        0f
                    );

                    if (rb.velocity.y == 0) animator.speed = 0;
                    else animator.speed = 1;
                    return;
                }

                UiManager.Instance
                    .uiInteraction
                    .SetInteraction("Subir escada", () =>
                    {
                        Climbing = true;
                        rb.gravityScale = 0;
                        animator.Play("Climbing");
                    })
                    .Show();
            }
            else
            {
                rb.gravityScale = 9;
                UiManager.Instance.uiInteraction.Clean().Hide();
                Climbing = false;
            }
        }

        public void TakeDamage(float value)
        {
            if (isDeath) return;
            HealthManager(value);
        }

        public void HealthManager(float value)
        {
            currentLife += value / maxLife;
            UiManager.Instance.uiStatusPlayer.ChangeLife(currentLife);
        }

        private void OnDrawGizmos()
        {
            Gizmos.DrawSphere(groundPosition.position, groundCheckerRadius);
        }

        private void OnCollisionExit2D(Collision2D collision)
        {
            if (collision.gameObject.layer == DataLayers.LADDER)
            {
                // TODO: decidir estado
                animator.Play("Idle");
            }
        }

        private void OnTriggerExit2D(Collider2D collision)
        {
            if (collision.gameObject.layer == DataLayers.LADDER)
            {
                // TODO: decidir estado
                animator.Play("Idle");
            }
        }
    }
}