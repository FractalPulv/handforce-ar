using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MainMenuInitializer : MonoBehaviour
{
    void Start()
    {
        // Load HttpServerScene additively
        SceneManager.LoadSceneAsync("SettingsScene", LoadSceneMode.Additive).completed += OnHttpServerSceneLoaded;
    }

    void OnHttpServerSceneLoaded(AsyncOperation asyncOperation)
    {
        if (asyncOperation.isDone)
        {
            Debug.Log("HttpServerScene loaded successfully.");
        }
    }
}




