using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collider2D))]
public class PlayerInteraction : MonoBehaviour
{
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Manipulable")
        {
            switch(collision.gameObject.layer)
            {
                case 7:
                    UiManager.Instance
                        .uiInteraction
                        .SetInteraction("Roubar comida", () =>
                        {

                        })
                        .Show();
                    break;
            }
        }
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.tag == "Manipulable")
        {
            UiManager.Instance.uiInteraction.Clean().Hide();
        }
    }
}
