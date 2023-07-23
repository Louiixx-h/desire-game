using UnityEngine;

namespace Desire.DI
{
    /// <summary>
    /// Resolves dependencies for the entire scene.
    /// </summary>
    public class ResolveScene : MonoBehaviour
    {
        /// <summary>
        /// Resolve scene dependencies on awake.
        /// </summary>
        private void Awake()
        {
            var dependencyResolver = new DependencyResolver();
            dependencyResolver.ResolveScene();
        }
    }
}