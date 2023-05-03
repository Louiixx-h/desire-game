using TMPro;
using UnityEngine;
using UnityEngine.Events;
using UnityEngine.UI;

public class UiInteraction : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI textName;
    Button button;

    private void Start()
    {
        button = GetComponent<Button>();
        Hide();    
    }

    public UiInteraction SetInteraction(string name, UnityAction action)
    {
        textName.text = "[ E ] " + name;
        if(Input.GetKeyDown(KeyCode.E)) action.Invoke();
        return this;
    }

    public UiInteraction Clean()
    {
        textName.text = "[ E ]";
        button.onClick.RemoveAllListeners();
        return this;
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
