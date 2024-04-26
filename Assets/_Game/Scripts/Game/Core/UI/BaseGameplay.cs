using UnityEngine;

namespace Desire.Scripts.Game.Core.UI
{
    public abstract class BaseGameplay : MonoBehaviour
    {
        public abstract void BindingElements();
        public abstract void ChangeLife(float value);
        public abstract void Show();
        public abstract void Hide();

        public interface IGameplayPresenter
        {
            public void Init();
            public void Hide();
            public void Show();
        }
    }
}