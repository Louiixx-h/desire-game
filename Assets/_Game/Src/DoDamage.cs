using UnityEngine;

public class DoDamage : MonoBehaviour
{
    [SerializeField] Transform position;
    [SerializeField] LayerMask target;
    [SerializeField] float radius = 0.82f;
    
    float damage = 0;
    
    bool canAttack = false;

    private void Awake()
    {
        gameObject.SetActive(false);
    }

    private void FixedUpdate()
    {
        if (!canAttack) return;
        Collider2D[] colliders = Physics2D.OverlapCircleAll(position.position, radius, target);
        foreach (Collider2D collider in colliders)
        {
            var damageable = collider.gameObject.GetComponent<IDamageable>();
            if (damageable == null)
            {
                gameObject.SetActive(false);
                return;
            }
            damageable.TakeDamage(-damage);
            //UiManager.Instance.uiDamage.SetDamage(damage, collider.gameObject.transform.position);
        }
        canAttack = false;
        gameObject.SetActive(false);
    }

    public void Attack(float damage)
    {
        gameObject.SetActive(true);
        this.damage = damage;
        canAttack = true;
    }

    private void OnDrawGizmos()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(position.position, radius);
    }
}
