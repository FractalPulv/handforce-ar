using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using MixedReality.Toolkit.Subsystems;
using UnityEngine.XR;
using MixedReality.Toolkit;

public class HandRiging : MonoBehaviour
{
    public GameObject jointMarker;
    public GameObject boneMarker;

    public GameObject[] fingerJointsObjectsLeft = new GameObject[26];
    public GameObject[] fingerJointsObjectsRight = new GameObject[26];
    public GameObject[] fingerBonesObjectsLeft = new GameObject[24];
    public GameObject[] fingerBonesObjectsRight = new GameObject[24];

    public float[] angleJointsLeft = new float[14];
    public float[] angleJointsRight = new float[14];

    public AngleCalculator angleCalculator;
    public AngleDisplay angleDisplay;

    public bool displayJointsAndBones = false;
    public bool trackLeftHand = false;
    public bool trackRightHand = false;


    // Start is called before the first frame update
    void Start()
    {
        // apply all the objects to the joints and bones
        for (int i = 0; i < fingerJointsObjectsLeft.Length; i++)
        {
            fingerJointsObjectsLeft[i] = Instantiate(jointMarker, this.transform);
            fingerJointsObjectsLeft[i].name = "jointLeft" + i.ToString();
        }
        for (int j = 0; j < fingerJointsObjectsRight.Length; j++)
        {
            fingerJointsObjectsRight[j] = Instantiate(jointMarker, this.transform);
            fingerJointsObjectsRight[j].name = "jointRight" + j.ToString();
        }
        for (int i = 0; i < fingerBonesObjectsLeft.Length; i++)
        {
            fingerBonesObjectsLeft[i] = Instantiate(boneMarker, this.transform);
            fingerBonesObjectsLeft[i].name = "boneLeft" + i.ToString();
        }
        for (int j = 0; j < fingerBonesObjectsRight.Length; j++)
        {
            fingerBonesObjectsRight[j] = Instantiate(boneMarker, this.transform);
            fingerBonesObjectsRight[j].name = "boneRight" + j.ToString();
        }

        HideObjects();
    }

    // Update is called once per frame
    void Update()
    {
        // Get a reference to the aggregator.
        var aggregator = XRSubsystemHelpers.GetFirstRunningSubsystem<HandsAggregatorSubsystem>();
        HandJointPose jointPose;


        //look for positions of the joints and place a sphere
        if (trackLeftHand)
        {
            for (int i = 0; i < fingerJointsObjectsLeft.Length; i++)
            {
                if (aggregator.TryGetJoint((TrackedHandJoint)i, XRNode.LeftHand, out jointPose))
                {
                    fingerJointsObjectsLeft[i].transform.position = jointPose.Position;
                }
            }
            HandBones(fingerBonesObjectsLeft, fingerJointsObjectsLeft);
        }

        if (trackRightHand)
        {
            for (int j = 0; j < fingerJointsObjectsRight.Length; j++)
            {
                if (aggregator.TryGetJoint((TrackedHandJoint)j, XRNode.RightHand, out jointPose))
                {
                    fingerJointsObjectsRight[j].transform.position = jointPose.Position;
                }
            }
            HandBones(fingerBonesObjectsRight, fingerJointsObjectsRight);
        }

        if (trackLeftHand) angleJointsLeft = angleCalculator.angleList(fingerJointsObjectsLeft);
        if (trackRightHand) angleJointsRight = angleCalculator.angleList(fingerJointsObjectsRight);


        HideObjects(aggregator);
        ShowObjects(aggregator);
        DisplayAngles();
    }


    public void HandBones(GameObject[] bonesObjects, GameObject[] jointObjects)
    {
        //palm
        ConnectJoints(bonesObjects[0], jointObjects[1], jointObjects[2]);
        ConnectJoints(bonesObjects[1], jointObjects[1], jointObjects[6]);
        ConnectJoints(bonesObjects[2], jointObjects[1], jointObjects[11]);
        ConnectJoints(bonesObjects[3], jointObjects[1], jointObjects[16]);
        ConnectJoints(bonesObjects[4], jointObjects[1], jointObjects[21]);

        //Thumb
        ConnectJoints(bonesObjects[5], jointObjects[2], jointObjects[3]);
        ConnectJoints(bonesObjects[6], jointObjects[3], jointObjects[4]);
        ConnectJoints(bonesObjects[7], jointObjects[4], jointObjects[5]);

        //index
        ConnectJoints(bonesObjects[8], jointObjects[6], jointObjects[7]);
        ConnectJoints(bonesObjects[9], jointObjects[7], jointObjects[8]);
        ConnectJoints(bonesObjects[10], jointObjects[8], jointObjects[9]);
        ConnectJoints(bonesObjects[11], jointObjects[9], jointObjects[10]);

        //middle
        ConnectJoints(bonesObjects[12], jointObjects[11], jointObjects[12]);
        ConnectJoints(bonesObjects[13], jointObjects[12], jointObjects[13]);
        ConnectJoints(bonesObjects[14], jointObjects[13], jointObjects[14]);
        ConnectJoints(bonesObjects[15], jointObjects[14], jointObjects[15]);

        //ring
        ConnectJoints(bonesObjects[16], jointObjects[16], jointObjects[17]);
        ConnectJoints(bonesObjects[17], jointObjects[17], jointObjects[18]);
        ConnectJoints(bonesObjects[18], jointObjects[18], jointObjects[19]);
        ConnectJoints(bonesObjects[19], jointObjects[19], jointObjects[20]);

        //pinkie
        ConnectJoints(bonesObjects[20], jointObjects[21], jointObjects[22]);
        ConnectJoints(bonesObjects[21], jointObjects[22], jointObjects[23]);
        ConnectJoints(bonesObjects[22], jointObjects[23], jointObjects[24]);
        ConnectJoints(bonesObjects[23], jointObjects[24], jointObjects[25]);

    }

    void ConnectJoints(GameObject bone, GameObject joint1, GameObject joint2)
    {
        if (joint1.GetComponent<Renderer>().enabled && joint2.GetComponent<Renderer>().enabled)
        {
            bone.transform.position = (joint1.transform.position - joint2.transform.position) / 2.0f + joint2.transform.position;

            var v3T = bone.transform.localScale;
            v3T.y = ((joint1.transform.position - joint2.transform.position) / 2.0f).magnitude;
            bone.transform.localScale = v3T;

            bone.transform.rotation = Quaternion.FromToRotation(Vector3.up, joint1.transform.position - joint2.transform.position);

            bone.GetComponent<Renderer>().enabled = true;
        }
    }

    void HideObjects(HandsAggregatorSubsystem aggregator)
    {

        // hide the joints and bones when not in visible.
        if (trackLeftHand && !aggregator.TryGetEntireHand(XRNode.LeftHand, out IReadOnlyList<HandJointPose> joints))
        {
            foreach (GameObject jointObject in fingerJointsObjectsLeft)
            {
                jointObject.GetComponent<Renderer>().enabled = false;
            }
            foreach (GameObject boneObject in fingerBonesObjectsLeft)
            {
                boneObject.GetComponent<Renderer>().enabled = false;
            }
        }

        if (trackRightHand && !aggregator.TryGetEntireHand(XRNode.RightHand, out IReadOnlyList<HandJointPose> joints2))
        {
            foreach (GameObject jointObject in fingerJointsObjectsRight)
            {
                jointObject.GetComponent<Renderer>().enabled = false;
            }
            foreach (GameObject boneObject in fingerBonesObjectsRight)
            {
                boneObject.GetComponent<Renderer>().enabled = false;
            }
        }

    }

    void HideObjects()
    {
        // hide the joints and bones when not in visible.
        foreach (GameObject jointObject in fingerJointsObjectsLeft)
        {
            jointObject.GetComponent<Renderer>().enabled = false;
        }
        foreach (GameObject boneObject in fingerBonesObjectsLeft)
        {
            boneObject.GetComponent<Renderer>().enabled = false;
        }

        foreach (GameObject jointObject in fingerJointsObjectsRight)
        {
            jointObject.GetComponent<Renderer>().enabled = false;
        }
        foreach (GameObject boneObject in fingerBonesObjectsRight)
        {
            boneObject.GetComponent<Renderer>().enabled = false;
        }
    }

    void ShowObjects(HandsAggregatorSubsystem aggregator)
    {
        if (displayJointsAndBones)
        {
            // hide the joints and bones when not in visible.
            if (trackLeftHand && aggregator.TryGetEntireHand(XRNode.LeftHand, out IReadOnlyList<HandJointPose> joints))
            {
                foreach (GameObject jointObject in fingerJointsObjectsLeft)
                {
                    jointObject.GetComponent<Renderer>().enabled = true;
                }
                foreach (GameObject boneObject in fingerBonesObjectsLeft)
                {
                    boneObject.GetComponent<Renderer>().enabled = true;
                }
            }

            if (trackRightHand && aggregator.TryGetEntireHand(XRNode.RightHand, out IReadOnlyList<HandJointPose> joints2))
            {
                foreach (GameObject jointObject in fingerJointsObjectsRight)
                {
                    jointObject.GetComponent<Renderer>().enabled = true;
                }
                foreach (GameObject boneObject in fingerBonesObjectsRight)
                {
                    boneObject.GetComponent<Renderer>().enabled = true;
                }
            }
        }
    }

    void DisplayAngles()
    {
        if (displayJointsAndBones)
        {
            if (trackLeftHand) angleDisplay.display(fingerJointsObjectsLeft, angleJointsLeft);
            if (trackRightHand) angleDisplay.display(fingerJointsObjectsRight, angleJointsRight);
        }
    }

    public void switchHand()
    {
        trackLeftHand = !trackLeftHand;
        trackRightHand = !trackRightHand;
    }

    public void ToggleHandDisplay()
    {
        displayJointsAndBones = !displayJointsAndBones;
    }
}
