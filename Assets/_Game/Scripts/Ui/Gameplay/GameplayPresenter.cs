using Desire.Scripts.Game.Core.UI;

namespace Desire.Scripts.Ui.presentation.Gameplay
{
    public class GameplayPresenter: BaseGameplay.IGameplayPresenter
    {
        private readonly BaseGameplay _view;
        
        public GameplayPresenter(BaseGameplay view)
        {
            _view = view;
        }
        
        public void Init()
        {
            _view.BindingElements();
        }

        public void Hide()
        {
            _view.Hide();
        }

        public void Show()
        {
            _view.Show();
        }
    }
}