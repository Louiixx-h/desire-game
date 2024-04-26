using Desire.Scripts.Game.Command;
using Desire.Scripts.Game.Inputs;
using TMPro;
using UnityEngine;

namespace Desire.Game.Behaviours.Interactable
{
    public class Interactable : MonoBehaviour
    {
        [SerializeField] private InputInteractableAction input;
        [SerializeField] private GameObject canvas;
        [SerializeField] private TextMeshProUGUI text;
        [SerializeField] private InteractableProperties interactableProperties;
        [SerializeField] private ICommand command;

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
            command.Execute();
        }

        public void ShowInteraction()
        {
            canvas.SetActive(true);
            text.text = interactableProperties.message;
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
            if(!col.gameObject.CompareTag(interactableProperties.target)) return;
            _canInput = true;
            ShowInteraction();
        }

        private void OnTriggerExit2D(Collider2D other)
        {
            if(!other.gameObject.CompareTag(interactableProperties.target)) return;
            _canInput = false;
            HideInteraction();
        }
    }
}