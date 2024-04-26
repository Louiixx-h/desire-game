using Desire.Scripts.Game.Core.UI;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UIElements;

namespace Desire.Scripts.Ui.presentation.loading
{
    public class LoadingScreen : BaseLoading
    {
        private VisualElement _root;
        private ProgressBar _progressBar;
        private ILoadingPresenter _presenter;
        private float _targetProgress;

        private void Awake()
        {
            _presenter = new LoadingPresenter(this);
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
        
        public override void BindingElements()
        {
            _progressBar = _root.Q<ProgressBar>(name:"progress-bar");
        }
        
        public override void LoadScene(string sceneName)
        {
            var operation = SceneManager.LoadSceneAsync(sceneName);
            _presenter.Show();
            _presenter.HandleProgress(operation);
        }

        public override void SetProgress(float operationProgress)
        {
            _targetProgress = operationProgress;
        }

        private void Update()
        {
            var currentProgress = _progressBar.value;
            var progressResult = Mathf.MoveTowards(
                currentProgress, 
                _targetProgress, 
                3 * Time.deltaTime
            );
            _progressBar.value = progressResult;
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
