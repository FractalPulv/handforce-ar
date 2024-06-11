using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ThemedExercise : MonoBehaviour
{
    public GameObject InformationPanel;
    public GameObject AudioSource;
    public GameObject FalseFloor;
    public GameObject[] objects = new GameObject[0];

    private void OnEnable()
    {
        Debug.Log("Waking Initiator");
        InformationPanel.SetActive(true);
        AudioSource.SetActive(true);
        FalseFloor.SetActive(true);
        foreach (var obj in objects)
        {
            obj.SetActive(true);
        }
    }

    private void OnDisable()
    {
        InformationPanel.SetActive(false);
        AudioSource.SetActive(false);
        FalseFloor.SetActive(false);
        foreach (var obj in objects)
        {
            obj.SetActive(false);
        }
    }
}
