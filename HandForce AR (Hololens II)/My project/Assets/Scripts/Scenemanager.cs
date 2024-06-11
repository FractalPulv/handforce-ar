using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Scenemanager : MonoBehaviour
{
    public string[] sceneList = new string[3];
    SceneController[] sceneObjectList = new SceneController[3];
    string activeScene = "";
    float countdown = 10f;
    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("starting main menu");
        foreach (string scene in sceneList)
        {
            SceneManager.LoadScene(scene, LoadSceneMode.Additive);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void Startup()
    {
        sceneObjectList = FindObjectsOfType<SceneController>();
        SelectLoadingScene("1_MainMenuScene");
    }

    public void SelectLoadingScene(string scene)
    {
        for(int i = 0; i <= 2; i++)
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
