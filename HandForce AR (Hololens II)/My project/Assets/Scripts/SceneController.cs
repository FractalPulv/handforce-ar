using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SceneController : MonoBehaviour
{
    public GameObject initialObject;

    Scenemanager scenemanager;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void Awake()
    {
        scenemanager = FindObjectOfType<Scenemanager>();
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void ChangeScene (string newScene)
    {
        scenemanager.SelectLoadingScene(newScene);
    }

    public void ActivateScene()
    {
        Debug.Log("startingScene");
        initialObject.SetActive(true);
    }

    public void DeactivateScene()
    {
        Debug.Log("Stopping scene");
        initialObject.SetActive(false);
    }
}
