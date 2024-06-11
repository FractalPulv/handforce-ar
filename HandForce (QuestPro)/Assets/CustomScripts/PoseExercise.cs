using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PoseExercise : MonoBehaviour
{
    public GameObject InformationPanel;
    public GameObject[] objects = new GameObject[0];

    private void OnEnable()
    {
        Debug.Log("Waking Initiator");
        InformationPanel.SetActive(true);
        foreach (var obj in objects)
        {
            obj.SetActive(true);
        }
    }

    private void OnDisable()
    {
        InformationPanel.SetActive(false);
        foreach (var obj in objects)
        {
            obj.SetActive(false);
        }
    }
}
