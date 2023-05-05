using UnityEngine;

namespace Desire.Game.Player
{
    public class PlayerAnimationHandler
    {
        private readonly Animator _animator;
        
        public PlayerAnimationHandler(Animator animator)
        {
            _animator = animator;
        }
        
        public void Play(string name)
        {
            _animator.Play(name);
        }
        
        public bool IsFinished(int layer, string tag)
        {
            return _animator.GetCurrentAnimatorStateInfo(layer).IsTag(tag) 
                   && _animator.GetCurrentAnimatorStateInfo(layer).normalizedTime >= 1;
        }
    }
}