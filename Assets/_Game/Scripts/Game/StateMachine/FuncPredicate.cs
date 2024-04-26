using System;

namespace Desire.Game.StateMachine
{
    public class FuncPredicate : IPredicate
    {
        readonly Func<bool> func;

        public FuncPredicate(Func<bool> func)
        {
            this.func = func;
        }

        public bool Evaluate() => func.Invoke();
    }
}