using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HandMirroring : MonoBehaviour
{
    bool mirrorMode;
    bool leftSide;
    HandRiging handRiging;

    public GameObject mirrorPlane;
    public GameObject MirroredJoint;
    public GameObject MirroredBone;
    public GameObject rig;

    public GameObject[] fingerJointsObjects = new GameObject[26];
    public GameObject[] fingerBonesObjects = new GameObject[24];

    GameObject[] JointsObject;
    public GameObject[] OtherJointsObject;

    private void Awake()
    {
        handRiging = rig.GetComponent<HandRiging>();
    }
    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < fingerJointsObjects.Length; i++)
        {
            fingerJointsObjects[i] = Instantiate(MirroredJoint, this.transform);
        }
        for (int j = 0; j < fingerBonesObjects.Length; j++)
        {
            fingerBonesObjects[j] = Instantiate(MirroredBone, this.transform);
        }

        mirrorMode = false;
        leftSide = true;
        JointsObject = handRiging.fingerJointsObjectsLeft;
        OtherJointsObject = handRiging.fingerJointsObjectsRight;
    }

    // Update is called once per frame
    void Update()
    {
        // hide the joints and bones when not in visible.
        foreach (GameObject jointObject in fingerJointsObjects)
        {
            jointObject.GetComponent<Renderer>().enabled = false;
        }

        foreach (GameObject jointObject in fingerBonesObjects)
        {
            jointObject.GetComponent<Renderer>().enabled = false;
        }

        if (mirrorMode)
        {
            if (leftSide)
            {
                JointsObject = handRiging.fingerJointsObjectsLeft;
                OtherJointsObject = handRiging.fingerJointsObjectsRight;
            }
            else
            {
                JointsObject = handRiging.fingerJointsObjectsRight;
                OtherJointsObject = handRiging.fingerJointsObjectsLeft;
            }

            for ( int i = 0; i < JointsObject.Length; i++)
            {
                if (JointsObject[i].GetComponent<Renderer>().enabled == true)
                {
                    var plane = new Plane(mirrorPlane.transform.up, mirrorPlane.transform.position);
                    var mirror = plane.ClosestPointOnPlane(JointsObject[i].transform.position);
                    var distance = JointsObject[i].transform.position - mirror;
                    fingerJointsObjects[i].transform.position = mirror - distance;
                    fingerJointsObjects[i].GetComponent<Renderer>().enabled = true;
                }
            }

            handRiging.HandBones(fingerBonesObjects, fingerJointsObjects);

        }
    }

    public void mirrorSwitch()
    {
        mirrorMode = !mirrorMode;
    }

    public void sideSwitch()
    { 
        leftSide = !leftSide;
    }
}
