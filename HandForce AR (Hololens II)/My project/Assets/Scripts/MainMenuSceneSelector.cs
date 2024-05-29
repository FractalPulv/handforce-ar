using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuSceneSelector : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        


    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void CoreExercise()
    {
        Debug.Log("core exercise");
        SceneManager.LoadSceneAsync("1_12345Exercise", LoadSceneMode.Single);
    
    }

    public void ThemedExercise()
    {
        Debug.Log("themed exercise");
        SceneManager.LoadScene("2_TeaCupExercise", LoadSceneMode.Single);
        
    }

 
}
