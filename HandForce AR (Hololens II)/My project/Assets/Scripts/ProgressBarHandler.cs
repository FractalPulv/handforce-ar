using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ProgressBarHandler : MonoBehaviour
{
    public Image imageProgressbar;
    public TMP_Text textProgress;
    public Pose pose;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        var progressTimer = pose.CheckTime();
        if (progressTimer >= 2) progressTimer = 2;
        float percentagaAmount = (2 - (float)progressTimer) * 1/2;
        imageProgressbar.fillAmount = percentagaAmount;
        textProgress.text = Mathf.RoundToInt(percentagaAmount * 100).ToString()+"%";
    }
}
