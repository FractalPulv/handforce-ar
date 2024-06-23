using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using UnityEngine.SceneManagement;

public class SceneController : MonoBehaviour
{
    public void LoadNewScene(string sceneName)
    {
        // Load new scene in single mode, then reload HttpServerScene additively
        SceneManager.LoadScene(sceneName, LoadSceneMode.Single);
        SceneManager.LoadScene("SettingsScene", LoadSceneMode.Additive);
    }

    public void UnloadCurrentScene()
    {
        Scene currentScene = SceneManager.GetActiveScene();
        SceneManager.UnloadSceneAsync(currentScene);
    }

    public void QuitGame()
    {
        //UnityEditor.EditorApplication.isPlaying = false;
        Application.Quit();
    }
}

