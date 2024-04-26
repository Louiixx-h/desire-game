using UnityEngine.UIElements;

namespace Desire.Scripts.Ui.presentation.startMenu
{
    public class StartMenuPresenter : IStartMenuContract.IPresenter
    {
        private readonly IStartMenuContract.IView _view;

        public StartMenuPresenter(IStartMenuContract.IView view)
        {
            _view = view;
        }
        
        public void Init()
        {
            _view.SetupButton();
        }

        public void OnClickStartGame(ClickEvent evt)
        {
            _view.StartGame();
        }

        public void OnClickNewGame(ClickEvent evt)
        {
            _view.NewGame();
        }

        public void OnClickConfigurationGame(ClickEvent evt)
        {
            _view.ConfigurationGame();
        }

        public void OnClickExitGame(ClickEvent evt)
        {
            _view.ExitGame();
        }
    }
}