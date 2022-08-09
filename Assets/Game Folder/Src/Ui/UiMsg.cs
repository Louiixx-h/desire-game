using TMPro;
using UnityEngine;

public class UiMsg : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI message;

    private void Start()
    {
        Clean();
    }

    public void SetText(string msg)
    {
        message.text = msg;
    }

    public void Clean()
    {
        message.text = "";
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
