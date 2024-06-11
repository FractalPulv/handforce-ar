using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneController : MonoBehaviour
{
    public GameObject initialObject;

    private Scenemanager scenemanager;

    void Awake()
    {
        scenemanager = FindObjectOfType<Scenemanager>();
    }

    public void ChangeScene(string newScene)
    {
        scenemanager.SelectLoadingScene(newScene);
    }

    public void ActivateScene()
    {
        Debug.Log("Starting scene");
        initialObject.SetActive(true);
    }

    public void DeactivateScene()
    {
        Debug.Log("Stopping scene");
        initialObject.SetActive(false);
    }
}
