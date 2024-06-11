using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class RetrieveTime : MonoBehaviour
{
    public StopWatch stopWatch;
    public TMP_Text resultText;
    public int RepetitionAmount;

    int time = 0;

    // Start is called before the first frame update
    void Start()
    {
        time = Mathf.FloorToInt((float)stopWatch.ReturnTime());

        resultText.text = "The time needed to do all " + RepetitionAmount.ToString() + " repetitions of the exercise took " + time.ToString() + " seconds. This is great! \nIf you want to redo the exercise, press the button, or go back to the main menu.";
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
