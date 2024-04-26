using Desire.Scripts.Game.Core.UI;
using UnityEngine.UIElements;

namespace Desire.Scripts.Ui.presentation.Gameplay
{
    public class GameplayScreen : BaseGameplay
    {
        private VisualElement _root;
        private VisualElement _lifeBar;
        private IGameplayPresenter _presenter;
        
        private void Awake()
        {
            _presenter = new GameplayPresenter(this);
        }

        public void OnEnable()
        {
            var uiDocument = GetComponentInChildren<UIDocument>();
            _root = uiDocument.rootVisualElement;
            _presenter.Init();
        }
        
        public override void BindingElements()
        {
            _lifeBar = _root.Q<VisualElement>(name:"overlay");
        }

        public override void ChangeLife(float value)
        {
            _lifeBar.style.width = new StyleLength(Length.Percent(value*100));
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