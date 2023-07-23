using UnityEngine;
using UnityEngine.UI;

namespace Desire.Ui
{
    public class UiHealthPlayer : MonoBehaviour
    {
        [SerializeField] Image imageLife;

        public void ChangeLife(float value)
        {
            imageLife.fillAmount = value;
        }

        public void Show()
        {
            gameObject.SetActive(true);
        }

        public void Hide()
        {
            gameObject.SetActive(false);
        }
    }
}