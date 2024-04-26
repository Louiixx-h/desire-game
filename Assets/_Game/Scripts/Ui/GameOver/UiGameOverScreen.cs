using Desire.Scripts.Game.Command;
using UnityEngine;
using UnityEngine.UI;

public class UiGameOverScreen : MonoBehaviour
{
    [SerializeField] private ICommand exitCommand;
    [SerializeField] private ICommand tryAgainCommand;
    [SerializeField] private Button tryAgain;
    [SerializeField] private Button exit;

    private void OnEnable()
    {
        tryAgain.onClick.AddListener(OnTryAgainClicked);
        tryAgain.onClick.AddListener(OnExitClicked);
    }

    private void OnDisable()
    {
        tryAgain.onClick.RemoveListener(OnTryAgainClicked);
        tryAgain.onClick.RemoveListener(OnExitClicked);
    }

    private void OnTryAgainClicked()
    {
        tryAgainCommand.Execute();
    }

    private void OnExitClicked()
    {
        exitCommand.Execute();
    }
}
