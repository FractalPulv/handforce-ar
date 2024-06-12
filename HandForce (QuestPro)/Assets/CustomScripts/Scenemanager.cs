using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Scenemanager : MonoBehaviour
{
    public string[] sceneList = new string[2];
    SceneController[] sceneObjectList = new SceneController[2];
    string activeScene = "";

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Starting main menu");
        foreach (string scene in sceneList)
        {
            SceneManager.LoadScene(scene, LoadSceneMode.Additive);
        }
    }

    void Update()
    {

    }

    public void InitializeSceneObjects()
    {
        sceneObjectList = FindObjectsOfType<SceneController>();
        SelectLoadingScene("MainMenuScene");
    }

    public void SelectLoadingScene(string scene)
    {
        for (int i = 0; i < sceneList.Length; i++)
        {
            if (sceneList[i] == scene)
            {
                SceneManager.SetActiveScene(SceneManager.GetSceneByName(scene));
                sceneObjectList[i].ActivateScene();
            }
            else
            {
                sceneObjectList[i].DeactivateScene();
            }
        }
    }
}
