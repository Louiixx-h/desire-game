using System.Collections;
using UnityEngine;

namespace Desire
{
    public class SceneManager : GameManager<SceneManager>
    {
        private void Start()
        {
            StartCoroutine(InitScene());
        }

        public void Event(EnumEventAction action)
        {
            switch (action)
            {
                case EnumEventAction.EVENT_BOSS_FIGHT_SHADOW:
                    break;
                case EnumEventAction.EVENT_CAMERA:
                    break;
            }
        }

        IEnumerator InitScene()
        {
            //PlayerController.Instance.Sleep();
            yield return new WaitForSeconds(3f);
            yield return ShowMessage();
            yield return new WaitForSeconds(1f);

            UiManager.Instance.uiMsg.Hide();
            yield return new WaitForSeconds(2);

            //PlayerController.Instance.AwakePlayer();
            yield return null;
        }

        IEnumerator ShowMessage()
        {
            int i = 0;
            string message = "Eu desejo...";
            string text = "";

            while (i < message.Length)
            {
                yield return new WaitForSeconds(0.4f);
                text += message[i];
                UiManager.Instance.uiMsg.SetText(text);
                i++;
            }
        }
    }
}