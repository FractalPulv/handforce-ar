using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StopWatch : MonoBehaviour
{
    public bool startTimer = false;
    double timeSpent = 0;

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (startTimer)
        {
            timeSpent += Time.deltaTime;
        }
    }

    public void StopTimer()
    {
        startTimer = false;
        timeSpent += Time.deltaTime;
    }

    public void StartTimer()
    {
        timeSpent = 0;
        startTimer = true;
    }

    public double ReturnTime()
    {
        return timeSpent;
    }
}
