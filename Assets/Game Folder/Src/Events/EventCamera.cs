using Cinemachine;
using UnityEngine;

public class EventCamera: MonoBehaviour
{
    [SerializeField] CinemachineVirtualCamera camera;

    public void StartEvent()
    {
        print("start");
        camera.GetCinemachineComponent<CinemachineFramingTransposer>()
            .m_YDamping = -5.2f;
    }

    public void EndEvent()
    {
        print("end");
        camera.GetCinemachineComponent<CinemachineFramingTransposer>()
            .m_YDamping = -1.2f;
    }

    private void OnTriggerExit2D(Collider2D collision)
    {
        if (collision.gameObject.layer == DataLayers.PLAYER)
            EndEvent();
    }
}
