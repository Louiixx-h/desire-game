using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]
public class AIMouse : MonoBehaviour, IDamageable
{
    [SerializeField] Vector2 visionRange;
    [SerializeField] float distance;
    [SerializeField] CheckPlayer checkPlayer;
    [SerializeField] SpriteRenderer spriteRenderer;

    [SerializeField] [Range(1, 20)] float moveSpeed;

    Animator     animator;
    Rigidbody2D  rb;
    GameObject   target;
    AIPatrol     currentState;
    Coroutine    coroutine;

    float currentLife = 40;

    bool isDeath = false;

    enum AIPatrol
    {
        PATROl,
        FOLLOW,
        ATTACK,
    }


    private void Start()
    {
        animator = GetComponent<Animator>();
        rb = GetComponent<Rigidbody2D>();
        Init();
    }

    private void FixedUpdate()
    {
        if (currentLife <= 0) DeathState();
        FollowState();
    }

    void Init()
    {
        ChangeState(AIPatrol.PATROl);

        checkPlayer.onEnter += OnEnteringRangeofvision;
        checkPlayer.onExit += OnExitingRangeofvision;
    }

    void ChangeState(AIPatrol state)
    {
        currentState = state;
        switch (state)
        {
            case AIPatrol.PATROl:
                PatrolState();
                break;
            case AIPatrol.ATTACK:
                AttackState();
                break;
        }
    }

    void PatrolState()
    {
        animator.Play("Idle");
    }

    void FollowState()
    {
        if (currentState != AIPatrol.FOLLOW) return;

        var currentPosition = transform.position;
        var targetPosition = target.transform.position;
        
        if (Vector2.Distance(currentPosition, targetPosition) <= 1)
        {
            ChangeState(AIPatrol.ATTACK);
            return;
        }

        animator.Play("Walking");
        var direction = (currentPosition - targetPosition).normalized * -1;

        rb.MovePosition(
            rb.transform.position + 
            direction * 
            moveSpeed * 
            Time.deltaTime
        );

        if (direction.x > 0) spriteRenderer.flipX = false;
        if (direction.x < 0) spriteRenderer.flipX = true;
    }

    void DeathState()
    {
        if (isDeath) return;
        isDeath = true;
        Destroy(gameObject);
    }
     
    void AttackState()
    {
        animator.Play("Idle");
    }

    void OnEnteringRangeofvision(Collider2D collision)
    {
        if (collision.gameObject.layer == DataLayers.PLAYER)
        {
            target = collision.gameObject;
            ChangeState(AIPatrol.FOLLOW);
        }
    }

    void OnExitingRangeofvision(Collider2D collision)
    {
        if (collision.gameObject.layer == DataLayers.PLAYER)
        {
            ChangeState(AIPatrol.PATROl);
        }
    }

    public void TakeDamage(float value)
    {
        currentLife += value;
    }
}