using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuSceneSelector : MonoBehaviour
{
    public void ExercisesMenu()
    {
        Debug.Log("Exercises menu");
        FindObjectOfType<Scenemanager>().SelectLoadingScene("ExercisesMenu");
    }
}
