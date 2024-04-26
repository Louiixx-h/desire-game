using UnityEngine.UIElements;

namespace Desire.Scripts.Ui.presentation.startMenu
{
    public interface IStartMenuContract
    {
        interface IView
        {
            public void InitComponents(VisualElement root);
            public void BindingElements(VisualElement root);
            public void SetupButton();
            public void StartGame();
            public void NewGame();
            public void ConfigurationGame();
            public void ExitGame();
        }

        interface IPresenter
        {
            public void Init();
            public void OnClickStartGame(ClickEvent evt);
            public void OnClickNewGame(ClickEvent evt);
            public void OnClickConfigurationGame(ClickEvent evt);
            public void OnClickExitGame(ClickEvent evt);
        }
    }
}