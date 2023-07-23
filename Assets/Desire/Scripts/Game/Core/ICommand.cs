using UnityEngine;

namespace Desire.Scripts.Game.Command
{
    public abstract class ICommand: ScriptableObject
    {
        public abstract void Execute();
    }
}