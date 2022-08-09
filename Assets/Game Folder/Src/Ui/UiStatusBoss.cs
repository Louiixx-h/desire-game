using UnityEngine;
using UnityEngine.UI;

public class UiStatusBoss : MonoBehaviour
{
    [SerializeField] Image imageLife;

    private void Awake()
    {
        Hide();
    }

    public void ChangeLife(float value)
    {
        imageLife.fillAmount = value;
    }

    public void Show()
    {
        gameObject.SetActive(true);
    }

    public void Hide()
    {
        gameObject.SetActive(false);
    }
}
