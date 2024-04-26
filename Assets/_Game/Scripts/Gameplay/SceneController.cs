using AlienWaves.CoreDI;
using Desire.Game.Commons.Interfaces;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace Desire.Gameplay
{
    class SceneController : MonoBehaviour, ISceneController
    {
        private readonly Dictionary<string, SceneAsset> _additiveScenes = new();
        private string _currentScene;

        public Action OnLoadingStart { get; set; }
        public Action OnLoadingEnd { get; set; }

        private void OnEnable()
        {
            SceneManager.sceneLoaded += OnSceneLoaded;
        }

        void OnDisable()
        {
            SceneManager.sceneLoaded -= OnSceneLoaded;
        }

        public void AddScene(SceneAsset scene)
        {
            StartCoroutine(LoadAdditiveSceneAsync(scene));
        }

        public void SwitchScene(SceneAsset scene)
        {
            if (_currentScene == null)
            {
                StartCoroutine(SingleOperationAsync(scene));
            }
            else
            {
                StartCoroutine(SwitchOperationAsync(scene));
            }
        }

        IEnumerator SingleOperationAsync(SceneAsset scene)
        {
            yield return null;
            OnLoadingStart?.Invoke();
            yield return LoadSceneAsync(scene);
            OnLoadingEnd?.Invoke();
            yield return null;
        }

        IEnumerator SwitchOperationAsync(SceneAsset scene)
        {
            yield return null;
            OnLoadingStart?.Invoke();
            yield return UnloadSceneAsync(_currentScene);
            yield return LoadSceneAsync(scene);
            OnLoadingEnd?.Invoke();
            yield return null;
        }

        IEnumerator UnloadSceneAsync(string scene)
        {
            yield return null;
            AsyncOperation asyncOperation = SceneManager.UnloadSceneAsync(scene);
            while (!asyncOperation.isDone)
            {
                Debug.Log($"Unloading {scene} progress: {asyncOperation.progress * 100}%");
                yield return null;
            }
            Debug.Log($"Scene {scene} unloaded!");
        }

        IEnumerator LoadSceneAsync(SceneAsset scene, LoadSceneMode mode = LoadSceneMode.Additive)
        {
            yield return null;
            AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(scene.name, mode);
            asyncOperation.allowSceneActivation = false;
            while (!asyncOperation.isDone)
            {
                Debug.Log($"Loading {scene.name} progress: {asyncOperation.progress * 100}%");
                if (asyncOperation.progress >= 0.9f)
                {
                    Debug.Log($"Scene {scene.name} loaded!");
                    asyncOperation.allowSceneActivation = true;
                    _currentScene = scene.name;
                }
                yield return null;
            }
        }

        IEnumerator LoadAdditiveSceneAsync(SceneAsset scene, LoadSceneMode mode = LoadSceneMode.Additive)
        {
            yield return null;
            AsyncOperation asyncOperation = SceneManager.LoadSceneAsync(scene.name, mode);
            asyncOperation.allowSceneActivation = false;
            while (!asyncOperation.isDone)
            {
                Debug.Log($"Loading {scene.name} progress: {asyncOperation.progress * 100}%");
                if (asyncOperation.progress >= 0.9f)
                {
                    Debug.Log($"Scene {scene.name} loaded!");
                    asyncOperation.allowSceneActivation = true;
                    _additiveScenes.Add(scene.name, scene);
                }
                yield return null;
            }
        }

        private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
        {
            
        }

        private void Awake()
        {
            ServiceLocator.Global.Register<ISceneController>(this);
        }
    }
}
