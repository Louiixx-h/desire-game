using Desire.Scripts.Game.Command;
using Desire.Scripts.Game.Inputs;
using TMPro;
using UnityEngine;

namespace Desire.Scripts.Game.Behaviours
{
    public class Interactable : MonoBehaviour, IInteractable
    {
        [SerializeField] private InputInteractableAction input;
        [SerializeField] private GameObject canvas;
        [SerializeField] private TextMeshProUGUI text;
        [SerializeField] private string message;
        [SerializeField] private string target;
        [field:SerializeField] public ICommand Command { get; set; }

        private bool _canInput;
        
        private void Start()
        {
            HideInteraction();
        }
        
        private void OnEnable()
        {
            input.OnAction += OnInputAction;
        }

        private void OnDisable()
        {
            input.OnAction -= OnInputAction;
        }

        private void OnInputAction(bool value)
        {
            if (!_canInput) return;
            Command.Execute();
        }

        public void ShowInteraction()
        {
            canvas.SetActive(true);
            text.text = message;
        }
        
        public void HideInteraction()
        {
            if (canvas == null) return;
            if (text == null) return;
            
            canvas.SetActive(false);
            text.text = "";
        }

        private void OnTriggerEnter2D(Collider2D col)
        {
            if(!col.gameObject.CompareTag(target)) return;
            _canInput = true;
            ShowInteraction();
        }

        private void OnTriggerExit2D(Collider2D other)
        {
            if(!other.gameObject.CompareTag(target)) return;
            _canInput = false;
            HideInteraction();
        }
    }
}