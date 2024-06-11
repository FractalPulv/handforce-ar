using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ExercisesMenuSceneSelector : MonoBehaviour
{
    public void LoadCoreExercise()
    {
        Debug.Log("Loading Core Exercise");
        FindObjectOfType<Scenemanager>().SelectLoadingScene("PoseExamplesModified");
    }

    public void LoadThemedExercise()
    {
        Debug.Log("Loading Themed Exercise");
        FindObjectOfType<Scenemanager>().SelectLoadingScene("Grab_HandForceScene");
    }

    public void BackToMainMenu()
    {
        Debug.Log("Back to main menu");
        FindObjectOfType<Scenemanager>().SelectLoadingScene("MainMenuScene");
    }
}
