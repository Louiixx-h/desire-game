using UnityEngine;
using Desire.Game.Player;
using TMPro;

namespace Desire.Game.Behaviours
{
    public class Interactable : MonoBehaviour, IInteractable
    {
        [SerializeField] private GameObject canvas;
        [SerializeField] private TextMeshProUGUI text;
        [SerializeField] private string message;
        [SerializeField] private LayerMask target;

        private PlayerBehaviour _player;
        private ViewStateEnum _viewState;
        
        enum ViewStateEnum
        {
            ShowView, HideView
        }
        
        private void Start()
        {
            HideInteraction();
        }

        public void ShowInteraction()
        {
            _viewState = ViewStateEnum.ShowView;
            canvas.SetActive(true);
            text.text = message;
        }
        
        public void HideInteraction()
        {
            _viewState = ViewStateEnum.HideView;
            canvas.SetActive(false);
            text.text = "";
        }

        public void DoInteraction()
        {
            print("interaction");
        }

        private void Update()
        {
            if(_player == null) return;
            if(_viewState.Equals(ViewStateEnum.ShowView)) return;
            if (!_player.IsAction) return;
            
            DoInteraction();
        }

        private void OnTriggerEnter2D(Collider2D col)
        {
            if(!col.gameObject.TryGetComponent(out PlayerBehaviour player)) return;

            ShowInteraction();
            _player = player;
        }

        private void OnTriggerExit2D(Collider2D other)
        {
            if(!other.gameObject.TryGetComponent(out PlayerBehaviour player)) return;
            
            HideInteraction();
            _player = null;
        }
    }
}