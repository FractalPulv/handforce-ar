using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MixedReality.Toolkit.SpatialManipulation;

public class Manipulator : MonoBehaviour
{
    public ObjectManipulator manipulator;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void disableManipulator()
    {
        manipulator.enabled = false;
    }

    public void enableManipulator()
    {
        manipulator.enabled = true;
    }
}
