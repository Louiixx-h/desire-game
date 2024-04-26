using System;
using Desire.Scripts.Game.Core;
using UnityEngine;

namespace Desire.Scripts.Game.Command
{
    [CreateAssetMenu(fileName = "Command", menuName = "ScriptableObjects/Command/Show Screen")]
    public class ShowScreenCommand: ICommand
    {
        [SerializeField] private ScreenNameEnum sceneName;

        private enum ScreenNameEnum
        {
            LoadingScreen,
            ConfigurationScreen,
            NewGameScreen
        }
        
        public override void Execute()
        {
            var levelManager = FindObjectOfType<LevelManager>();
            if (levelManager == null) return;
            if (levelManager.loadingScreen == null) return;
            
            switch (sceneName)
            {
                case ScreenNameEnum.LoadingScreen:
                    levelManager.loadingScreen.Show();
                    break;
                case ScreenNameEnum.ConfigurationScreen:
                    levelManager.configurationScreen.Show();
                    break;
                case ScreenNameEnum.NewGameScreen:
                    levelManager.newGameScreen.Show();
                    break;
                default:
                    throw new ArgumentOutOfRangeException();
            }
        }
    }
}