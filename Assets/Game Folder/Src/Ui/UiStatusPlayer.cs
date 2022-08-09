using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UiStatusPlayer : MonoBehaviour
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