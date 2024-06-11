using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ExercisesMenuSceneSelector : MonoBehaviour
{
    public void CoreExercise()
    {
        Debug.Log("Cup Exercise");
        FindObjectOfType<Scenemanager>().SelectLoadingScene("Grab_HandForceScene");
    }

    public void ThemedExercise()
    {
        Debug.Log("Count Exercise");
        FindObjectOfType<Scenemanager>().SelectLoadingScene("PoseExamplesModified");
    }
}
