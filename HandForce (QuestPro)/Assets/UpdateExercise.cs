using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UpdateExercise : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        SimpleHttpServer.Instance.currentScene = "Main Menu";
        SimpleHttpServer.Instance.current_exercise();
    }
}
