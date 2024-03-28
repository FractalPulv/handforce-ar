using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetCubes : MonoBehaviour
{
    List<Vector3> ObjectsPositions = new List<Vector3>() { };
    List<Quaternion> ObjectsRotations = new List<Quaternion>() { };
    // Start is called before the first frame update
    void Start()
    {
        foreach(Transform child in this.transform)
        {
            ObjectsPositions.Add(child.position);
            ObjectsRotations.Add(child.rotation);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    // Reset Action
    public void OnButtonReset()
    {
        for(int i = 0; i < ObjectsPositions.Count; i++) 
        {
            Transform child = this.transform.GetChild(i);
            child.position = ObjectsPositions[i];
            child.rotation = ObjectsRotations[i];
            child.GetComponent<Rigidbody>().velocity = Vector3.zero;
            child.GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
        }
    }
} 