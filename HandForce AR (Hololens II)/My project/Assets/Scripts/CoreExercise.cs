using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CoreExercise : MonoBehaviour
{

    public GameObject InformationPanel;
    public GameObject[] objects = new GameObject[0];
    // Start is called before the first frame update
    void Start()
    {
        
    }

    private void OnEnable()
    {
        Debug.Log("Waking Initiator");
        InformationPanel.SetActive(true);
    }

    private void OnDisable()
    {
        foreach (GameObject objectGroup in objects) objectGroup.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
