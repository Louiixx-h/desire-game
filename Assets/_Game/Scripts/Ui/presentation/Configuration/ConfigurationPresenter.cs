using Desire.Scripts.Game.Core.UI;
using UnityEngine.UIElements;

namespace Desire.Scripts.Ui.presentation.Configuration
{
    public class ConfigurationPresenter : BaseConfiguration.IConfigurationPresenter
    {
        private readonly BaseConfiguration _view; 
        
        public ConfigurationPresenter(BaseConfiguration view)
        {
            _view = view;
        }
        
        public void Init()
        {
            _view.BindingElements();
            _view.SetupCallbacks();
        }

        public void Show()
        {
            _view.Show();
        }

        public void Hide()
        {
            _view.Hide();
        }

        public void OnClickBackButton(ClickEvent evt)
        {
            _view.CloseScreen();
        }
    }
}