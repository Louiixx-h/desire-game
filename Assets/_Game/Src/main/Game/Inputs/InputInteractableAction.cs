using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Desire.Game.Inputs
{
    public class InputInteractableAction : MonoBehaviour, Controls.IInteractableActions
    {
        public Action<bool> OnAction;

        private Controls _controls;
    
        private void Start()
        {
            _controls = new Controls();
            _controls.Interactable.SetCallbacks(this);
            _controls.Interactable.Enable();
        }

        private void OnEnable()
        {
            if(_controls == null) return;
            _controls.Interactable.SetCallbacks(this);
            _controls.Interactable.Enable(); 
        }

        private void OnDisable()
        {
            _controls.Disable();
        }

        private void OnDestroy()
        {
            _controls.Disable();
        }

        void Controls.IInteractableActions.OnAction(InputAction.CallbackContext context)
        {
            if (context.performed)
            {
                OnAction?.Invoke(context.ReadValueAsButton());
            }
        }
    }
}