using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StartMainMenu : MonoBehaviour
{
    public GameObject MainMenuObject;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnEnable()
    {
        Debug.Log("Waking Initiator");
        MainMenuObject.SetActive(true);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
