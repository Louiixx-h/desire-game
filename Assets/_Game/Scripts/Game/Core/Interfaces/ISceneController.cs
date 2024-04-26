using System;
using UnityEditor;

namespace Desire.Game.Commons.Interfaces
{
    public interface ISceneController
    {
        public Action OnLoadingStart { get; set; }
        public Action OnLoadingEnd { get; set; }
        public void AddScene(SceneAsset scene);
        public void SwitchScene(SceneAsset scene);
    }
}
