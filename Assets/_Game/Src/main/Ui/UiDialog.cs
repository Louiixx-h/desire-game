using System;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class UiDialog : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI title;
    [SerializeField] TextMeshProUGUI message;
    [SerializeField] Button exitButton;

    private void Start()
    {
        Clean();
        Hide();
    }

    public void Clean()
    {
        title.text = "";
        message.text = "";
    }

    public void Show()
    {
        gameObject.SetActive(true);
        UiManager.Instance.uiStatusPlayer.Hide();
    }

    public void Hide()
    {
        gameObject.SetActive(false);
        UiManager.Instance.uiStatusPlayer.Show();
    }

    public void SetDialog(DataDialog dataDialog, Action callback)
    {
        Show();
        this.title.text = dataDialog.title;
        this.message.text = dataDialog.message;
        
        exitButton.onClick.AddListener(() =>
        {
            callback.Invoke();
            Hide();
        });
    }
}