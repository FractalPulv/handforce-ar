using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneController : MonoBehaviour
{
    public string sceneName; // Name of the scene
    public GameObject initialObject; // The main object to activate/deactivate

    private Scenemanager sceneManager;

    void Awake()
    {
        sceneManager = FindObjectOfType<Scenemanager>();
    }

    public void ChangeScene(string newScene)
    {
        sceneManager.SelectLoadingScene(newScene);
    }

    public void ActivateScene()
    {
        Debug.Log("Starting scene: " + sceneName);
        initialObject.SetActive(true);
    }

    public void DeactivateScene()
    {
        Debug.Log("Stopping scene: " + sceneName);
        initialObject.SetActive(false);
    }
}
