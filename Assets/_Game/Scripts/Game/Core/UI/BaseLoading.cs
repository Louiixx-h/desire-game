using UnityEngine;
using AsyncOperation = UnityEngine.AsyncOperation;

namespace Desire.Scripts.Game.Core.UI
{
    public abstract class BaseLoading : MonoBehaviour
    {
        public abstract void BindingElements();
        public abstract void Show();
        public abstract void Hide();
        public abstract void LoadScene(string sceneName);
        public abstract void SetProgress(float operationProgress);

        public interface ILoadingPresenter
        {
            public void Init();
            public void Show();
            public void Hide();
            public void HandleProgress(AsyncOperation operation);
        }
    }
}