using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : MonoBehaviour
{
    private static SceneLoader instance;
    public string settingsSceneName = "SettingsScene";
    private string currentSceneName;

    void Awake()
    {
        // Ensure only one instance of SceneLoader exists
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(gameObject);
        }
        else
        {
            Destroy(gameObject);
            return;
        }
    }

    void Start()
    {
        // Check if the current scene is the Settings scene
        if (SceneManager.GetActiveScene().name == settingsSceneName)
        {
            // Load the Main Menu scene additively
            LoadSceneAdditive("MainMenuScene");
        }
    }

    public void LoadSceneAdditive(string sceneName)
    {
        // Load the specified scene additively
        StartCoroutine(LoadSceneAsync(sceneName, true));
    }

    public void LoadSceneAndUnloadPrevious(string sceneName)
    {
        // Load the new scene additively and unload the previous one
        StartCoroutine(LoadSceneAsync(sceneName, false));
    }

    private IEnumerator LoadSceneAsync(string sceneName, bool keepPrevious)
    {
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync(sceneName, LoadSceneMode.Additive);

        while (!asyncLoad.isDone)
        {
            yield return null;
        }

        if (!keepPrevious && !string.IsNullOrEmpty(currentSceneName) && currentSceneName != settingsSceneName)
        {
            SceneManager.UnloadSceneAsync(currentSceneName);
        }

        currentSceneName = sceneName;
    }

    public void OnSceneButtonClicked(string sceneName)
    {
        LoadSceneAndUnloadPrevious(sceneName);
    }

    public void QuitGame()
    {
        Application.Quit();
    }
}
