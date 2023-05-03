using System.Collections;
using UnityEngine;

public class EventShadow : MonoBehaviour
{
    [SerializeField] GameObject enemyShadow;
    [SerializeField] GameObject particleBarrier;
    [SerializeField] GameObject barrierFront;
    [SerializeField] GameObject barrierBack;
    [SerializeField] Transform enemyShadowPosition;
    [SerializeField] DataDialog dataDialog;

    AIBoss aIBossShadow;

    private void Start()
    {
        barrierFront.SetActive(false);
        barrierBack.SetActive(false);
    }

    public void StartEvent()
    {
        StartCoroutine(InstatiateObjectsInScene());
        //PlayerController.Instance.Waiting();

        UiManager.Instance.uiDialog.SetDialog(dataDialog, () =>
        {
            aIBossShadow.Fight();
            //PlayerController.Instance.AwakePlayer();
        });
    }

    public void EndEvent()
    {
        Destroy(barrierFront);
        Destroy(barrierBack);
    }

    IEnumerator InstatiateObjectsInScene()
    {
        var enemyShadowObj = Instantiate(
            enemyShadow,
            enemyShadowPosition.position,
            Quaternion.identity
        );
        Instantiate(particleBarrier, barrierFront.transform);
        Instantiate(particleBarrier, barrierBack.transform);
        barrierFront.SetActive(true);
        barrierBack.SetActive(true);
        aIBossShadow = enemyShadowObj.GetComponent<AIBoss>();

        aIBossShadow.OnDeath += () =>
        {
            EndEvent();
        };

        yield return null;
    }
}
