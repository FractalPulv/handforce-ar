using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuSceneSelector : MonoBehaviour
{
    public void StartExercisesMenu()
    {
        Debug.Log("Starting exercises menu");
        FindObjectOfType<Scenemanager>().SelectLoadingScene("ExercisesMenu");
    }

    public void ExitApplication()
    {
        Debug.Log("Exiting application");
        Application.Quit();
    }
}
