using UnityEngine;
using UnityEngine.UIElements;
using AsyncOperation = UnityEngine.AsyncOperation;

namespace Desire.Scripts.Game.Core.UI
{
    public abstract class BaseNewGame : MonoBehaviour
    {
        public abstract void BindingElements();
        public abstract void Show();
        public abstract void Hide();
        public abstract void SetupCallbacks();
        public abstract void CloseScreen();
        
        public interface INewGamePresenter
        {
            public void Init();
            public void Show();
            public void Hide();
            public void OnClickBackButton(ClickEvent evt);
        }
    }
}