using Desire.Scripts.Game.Command;
using UnityEngine;
using UnityEngine.UIElements;

namespace Desire.Scripts.Ui.presentation.startMenu
{
    public class StartMenuScreen : MonoBehaviour, IStartMenuContract.IView
    {
        private IStartMenuContract.IPresenter _presenter;

        [SerializeField] private ICommand continueCommand;
        [SerializeField] private ICommand newGameCommand;
        [SerializeField] private ICommand configurationCommand;
        [SerializeField] private ICommand exitGameCommand;
        
        private VisualElement _startButton;
        private VisualElement _newButton;
        private VisualElement _configurationButton;
        private VisualElement _exitButton;

        private void OnEnable()
        {
            var uiDocument = GetComponent<UIDocument>();
            var root = uiDocument.rootVisualElement;
            
            _presenter = new StartMenuPresenter(this);
            
            InitComponents(root);
        }
        
        private void OnDisable()
        {
            _startButton.UnregisterCallback<ClickEvent>(_presenter.OnClickStartGame);
            _newButton.UnregisterCallback<ClickEvent>(_presenter.OnClickNewGame);
            _configurationButton.UnregisterCallback<ClickEvent>(_presenter.OnClickConfigurationGame);
            _exitButton.UnregisterCallback<ClickEvent>(_presenter.OnClickExitGame);
        }

        public void InitComponents(VisualElement root)
        {
            BindingElements(root);
            _presenter.Init();
        }
        
        public void BindingElements(VisualElement root)
        {
            _startButton = root.Q<VisualElement>(name:"start-button");
            _newButton = root.Q<VisualElement>(name:"new-button");
            _configurationButton = root.Q<VisualElement>(name:"config-button");
            _exitButton = root.Q<VisualElement>(name:"exit-button");
        }
        
        public void SetupButton()
        {
            _startButton.RegisterCallback<ClickEvent>(_presenter.OnClickStartGame);
            _newButton.RegisterCallback<ClickEvent>(_presenter.OnClickNewGame);
            _configurationButton.RegisterCallback<ClickEvent>(_presenter.OnClickConfigurationGame);
            _exitButton.RegisterCallback<ClickEvent>(_presenter.OnClickExitGame);
        }
        
        public void StartGame()
        {
            continueCommand.Execute();
        }
        
        public void NewGame()
        {
            newGameCommand.Execute();
        }
        
        public void ConfigurationGame()
        {
            configurationCommand.Execute();
        }
        
        public void ExitGame()
        {
            exitGameCommand.Execute();
        }
    }
}