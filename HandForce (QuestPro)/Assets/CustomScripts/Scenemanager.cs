using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Scenemanager : MonoBehaviour
{
    public string[] sceneList = new string[4]; // List of scenes to be managed
    private SceneController[] sceneObjectList;
    private string activeScene = "";

    void Start()
    {
        // Load all scenes additively at the start
        Debug.Log("Starting main menu");
        foreach (string scene in sceneList)
        {
            SceneManager.LoadScene(scene, LoadSceneMode.Additive);
        }

        // Initialize scene objects list
        StartCoroutine(InitializeSceneObjects());
    }

    IEnumerator InitializeSceneObjects()
    {
        yield return new WaitForSeconds(1); // Wait for the scenes to load
        sceneObjectList = FindObjectsOfType<SceneController>();
        SelectLoadingScene("MainMenuScene");
    }

    public void SelectLoadingScene(string scene)
    {
        foreach (var controller in sceneObjectList)
        {
            if (controller.sceneName == scene)
            {
                SceneManager.SetActiveScene(SceneManager.GetSceneByName(scene));
                controller.ActivateScene();
            }
            else
            {
                controller.DeactivateScene();
            }
        }
    }

    public void LoadScene(string sceneName)
    {
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
    }
}
