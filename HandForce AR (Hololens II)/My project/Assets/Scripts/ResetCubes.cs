using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ResetCubes : MonoBehaviour

{
    public static ResetCubes instance;
    public GameObject originPoint;

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

    private void Awake()
    {
        instance = this;
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
            child.GetComponent<Rigidbody>().useGravity = false;
        }
    }

    public void rndReset()
    {
        for (int i = 0; i < ObjectsPositions.Count; i++)
        {
            Transform child = this.transform.GetChild(i);
            //child.position = ObjectsPositions[i] + new Vector3(Random.Range(-0.75f, 0.75f), Random.Range(-0.1f, 0.1f), Random.Range(0, 0.75f));
            child.rotation = ObjectsRotations[i];
            child.position = originPoint.transform.position + new Vector3(Random.Range(-0.75f, 0.75f), Random.Range(-0.1f, 0.1f), Random.Range(0, 0.75f));
            child.GetComponent<Rigidbody>().velocity = Vector3.zero;
            child.GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
            child.GetComponent<Rigidbody>().useGravity = false;
        }
    }
} 