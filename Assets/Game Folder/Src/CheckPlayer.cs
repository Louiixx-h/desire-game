using UnityEngine;

public class CheckPlayer : MonoBehaviour
{
    public delegate void OnEnterDelegate(Collider2D collision);
    public event OnEnterDelegate onEnter;

    public delegate void OnExitDelegate(Collider2D collision);
    public event OnExitDelegate onExit;

    private void OnTriggerEnter2D(Collider2D collision)
    {
        onEnter.Invoke(collision);
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        onExit.Invoke(collision);
    }
}
