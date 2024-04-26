using System;
using System.Collections.Generic;

namespace Desire.Game.StateMachine
{
    public class StateMachineContext
    {
        StateNode current;
        Dictionary<Type, StateNode> nodes = new();
        HashSet<ITransition> anyTransitions = new();

        public void Update(float deltaTime)
        {
            var transition = GetTransition();
            if (transition != null)
                SwitchState(transition.To);

            current?.State?.UpdateState(deltaTime);
        }

        public void FixedUpdate(float deltaTime)
        {
            current?.State?.FixedUpdateState(deltaTime);
        }

        public void SetState(IState state)
        {
            current = nodes[state.GetType()];
            current.State?.StartState();
        }

        public void SwitchState(IState state)
        {
            if (state == current.State) return;

            var previousState = current.State;
            var nextState = nodes[state.GetType()].State;

            previousState?.EndState();
            nextState?.StartState();
            current = nodes[state.GetType()];
        }

        ITransition GetTransition()
        {
            foreach (var transition in anyTransitions)
                if (transition.Condition.Evaluate())
                    return transition;

            foreach (var transition in current.Transitions)
                if (transition.Condition.Evaluate())
                    return transition;

            return null;
        }

        public void AddTransition(IState from, IState to, IPredicate condition)
        {
            GetOrAddNode(from).AddTransition(GetOrAddNode(to).State, condition);
        }

        public void AddAnyTransition(IState to, IPredicate condition)
        {
            anyTransitions.Add(new Transition(GetOrAddNode(to).State, condition));
        }

        StateNode GetOrAddNode(IState state)
        {
            var node = nodes.GetValueOrDefault(state.GetType());

            if (node == null)
            {
                node = new StateNode(state);
                nodes.Add(state.GetType(), node);
            }

            return node;
        }

        class StateNode
        {
            public IState State { get; }
            public HashSet<ITransition> Transitions { get; }

            public StateNode(IState state)
            {
                State = state;
                Transitions = new HashSet<ITransition>();
            }

            public void AddTransition(IState to, IPredicate condition)
            {
                Transitions.Add(new Transition(to, condition));
            }
        }
    }
}