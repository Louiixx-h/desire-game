using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Desire.Game.Inputs
{
    public class InputPlayerActions : MonoBehaviour, Controls.IPlayerActions
    {
        public Action<Vector2> OnMotion;
        public Action<bool> OnFire;
        public Action<bool> OnJump;
        public Action<bool> OnAction;

        private Controls _controls;
    
        private void Start()
        {
            _controls = new Controls();
            _controls.Player.SetCallbacks(this);
            _controls.Player.Enable();
        }

        private void OnEnable()
        {
            if(_controls == null) return;
            _controls.Player.SetCallbacks(this);
            _controls.Player.Enable(); 
        }

        private void OnDisable()
        {
            _controls.Disable();
        }

        private void OnDestroy()
        {
            _controls.Disable();
        }

        void Controls.IPlayerActions.OnMotion(InputAction.CallbackContext context)
        {
            context.action.performed += ctx =>
            {
                OnMotion?.Invoke(ctx.ReadValue<Vector2>());
            };
            context.action.canceled += ctx =>
            {
                OnMotion?.Invoke(ctx.ReadValue<Vector2>());
            };
        }

        void Controls.IPlayerActions.OnFire(InputAction.CallbackContext context)
        {
            OnFire?.Invoke(context.ReadValueAsButton());
        }

        void Controls.IPlayerActions.OnJump(InputAction.CallbackContext context)
        {
            OnJump?.Invoke(context.ReadValueAsButton());
        }

        void Controls.IPlayerActions.OnAction(InputAction.CallbackContext context)
        {
            OnJump?.Invoke(context.ReadValueAsButton());
        }
    }
}