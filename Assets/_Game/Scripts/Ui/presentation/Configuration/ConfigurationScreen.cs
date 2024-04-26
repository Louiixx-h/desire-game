using Desire.Scripts.Game.Core.UI;
using UnityEngine.UIElements;

namespace Desire.Scripts.Ui.presentation.Configuration
{
    public class ConfigurationScreen : BaseConfiguration
    {
        private VisualElement _root;
        private VisualElement _backButton;
        private IConfigurationPresenter _presenter;

        private void Awake()
        {
            _presenter = new ConfigurationPresenter(this);
        }

        private void Start()
        {
            _presenter.Hide();
        }

        public void OnEnable()
        {
            var uiDocument = GetComponentInChildren<UIDocument>();
            _root = uiDocument.rootVisualElement;
            _presenter.Init();
        }

        private void OnDisable()
        {
            _backButton.UnregisterCallback<ClickEvent>(_presenter.OnClickBackButton);
        }

        public override void BindingElements()
        {
            _backButton = _root.Q<VisualElement>(name:"back-button");
        }
        
        public override void SetupCallbacks()
        {
            _backButton.RegisterCallback<ClickEvent>(_presenter.OnClickBackButton);
        }

        public override void CloseScreen()
        {
            _presenter.Hide();
        }

        public override void Show()
        {
            gameObject.SetActive(true);
        }

        public override void Hide()
        {
            gameObject.SetActive(false);
        }
    }
}
