using Desire.Scripts.Game.Core.UI;
using UnityEngine;

namespace Desire.Scripts.Ui.presentation.loading
{
    public class LoadingPresenter : BaseLoading.ILoadingPresenter
    {
        private readonly BaseLoading _view;
        
        public LoadingPresenter(BaseLoading view)
        {
            _view = view;
        }
        
        public void Init()
        {
            _view.BindingElements();
        }

        public void Show()
        {
            _view.Show();
        }

        public void Hide()
        {
            _view.Hide();
        }

        public void HandleProgress(AsyncOperation operation)
        {
            operation.allowSceneActivation = false;
            do
            {
                _view.SetProgress(operation.progress);
            } while (operation.progress < 0.9f);
            operation.allowSceneActivation = true;
        }
    }
}