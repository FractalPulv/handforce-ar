using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class PoseDetector : MonoBehaviour
{

    HandMirroring handMirroring;
    public TMP_Text ThresholdDisplay;

    float[] fingerThresholds = new float[26];


    private void Awake()
    {
        handMirroring = this.GetComponent<HandMirroring>();
        ThresholdDisplay = GetComponent<TMP_Text>();
    }

    // Start is called before the first frame update
    void Start()
    {
        

    }

    // Update is called once per frame
    void Update()
    {
        if (handMirroring.OtherJointsObject[0].GetComponent<Renderer>().enabled == true && handMirroring.fingerJointsObjects[0].GetComponent<Renderer>().enabled == true)
        {
            for (int i = 0; i < handMirroring.fingerJointsObjects.Length; i++)
            {
                fingerThresholds[i] = (handMirroring.fingerJointsObjects[i].transform.position - handMirroring.OtherJointsObject[i].transform.position).magnitude;
            }

            float average = 0;
            foreach (float threshold in fingerThresholds)
            {
                average += threshold;
            }

            average /= handMirroring.fingerJointsObjects.Length;
            if (average >= 0.04)  average = 0.04f; 
            var score = 100 - 2500 * average;
            //ThresholdDisplay.text = "Average FingerDistance: " + (int)average;
            Debug.Log("average");
            Debug.Log(average);
            Debug.Log("Score");
            Debug.Log(score);

        }
        else
        {
            //ThresholdDisplay.text = "Average FingerDistance: " + 0;
        }
    }
}
