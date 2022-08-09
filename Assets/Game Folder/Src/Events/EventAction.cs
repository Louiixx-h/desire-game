using UnityEngine;

public class EventAction : MonoBehaviour
{
    [SerializeField] EnumEventAction action;
    [SerializeField] BoxCollider2D boxCollider2D;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.layer == DataLayers.PLAYER)
        {
            SceneManager.Instance.Event(action);
            boxCollider2D.enabled = false;
        }
    }
}
