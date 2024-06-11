using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Pose : MonoBehaviour
{
    public HandRiging handriging;
    public GameObject gameUI;
    public StopWatch stopWatch;
    public GameObject tracking;
    public GameObject endingUI;

    float[] pose0 = { -145, -145, -125, -90, -130, -115, -90, -135, -115, -80, -140, -110, -90, -135 };
    float[] pose1 = { -145, -160, 145, 150, 160, -125, -95, -145, -115, -80, -145, -110, -90, -140 };
    float[] pose2 = { -150, -175, 155, 160, 160, 145, 150, 160, -150, -105, -155, -130, -110, -150 };
    float[] pose3 = { -150, -175, 160, 150, 160, 160, 155, 155, 150, 155, 160, -140, -170, -175 };
    float[] pose4 = { -155, -175, 160, 150, 160, 160, 155, 155, 160, 145, 165, 150, 150, 155 };
    float[] pose5 = { 160 , 165 , 160 , 150, 160 , 160 , 155, 155 , 160 , 145, 165 , 165 , 150, 155  };
   
    
    bool pose0Check = false;
    bool pose1Check = false;
    bool pose2Check = false;
    bool pose3Check = false;
    bool pose4Check = false;
    bool pose5Check = true;

    float timerValue = 2f;

    public TMP_Text state;

    int score = -1;




    float[] anglesOfHand = new float[14];

    // Start is called before the first frame update
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if(score >= 2)
        {
            stopWatch.StopTimer();
            gameUI.SetActive(false);
            tracking.SetActive(false);
            endingUI.SetActive(true);
        }

        if (handriging.trackLeftHand || handriging.trackRightHand)
        {
            if (handriging.trackLeftHand) anglesOfHand = handriging.angleJointsLeft;
            if (handriging.trackRightHand) anglesOfHand = handriging.angleJointsRight;

            if (pose0Check)
            {
                state.SetText("Closed your hand into a fist");
                if(checkAngles(pose0) >= 12)
                {
                    timerValue -= Time.deltaTime;
                }
                else
                {
                    timerValue = 2f;
                }

                if(timerValue <= 0)
                {
                    timerValue = 2f;
                    pose0Check = !pose0Check;
                    pose1Check = !pose1Check;
                }
            }

            if (pose1Check)
            {
                state.SetText("Raise you index finger out of the fist");
                if (checkAngles(pose1) >= 12)
                {
                    timerValue -= Time.deltaTime;
                }
                else
                {
                    timerValue = 2f;
                }

                if (timerValue <= 0)
                {
                    timerValue = 2f;
                    pose1Check = !pose1Check;
                    pose2Check = !pose2Check;
                }
            }

            if (pose2Check)
            {
                state.SetText("Raise you middle finger out of the fist");
                if (checkAngles(pose2) >= 12)
                {
                    timerValue -= Time.deltaTime;
                }
                else
                {
                    timerValue = 2f;
                }

                if (timerValue <= 0)
                {
                    timerValue = 2f;
                    pose2Check = !pose2Check;
                    pose3Check = !pose3Check;
                }
            }

            if (pose3Check)
            {
                state.SetText("Raise your ring finger out of the fist");
                if (checkAngles(pose3) >= 12)
                {
                    timerValue -= Time.deltaTime;
                }
                else
                {
                    timerValue = 2f;
                }

                if (timerValue <= 0)
                {
                    timerValue = 2f;
                    pose3Check = !pose3Check;
                    pose4Check = !pose4Check;
                }
            }

            if (pose4Check)
            {
                state.SetText("Raise your pinkie finger out of the fist");
                if (checkAngles(pose4) >= 12)
                {
                    timerValue -= Time.deltaTime;
                }
                else
                {
                    timerValue = 2f;
                }

                if (timerValue <= 0)
                {
                    timerValue = 2f;
                    pose4Check = !pose4Check;
                    pose5Check = !pose5Check;
                }
            }

            if (pose5Check)
            {
                state.SetText("Open your hand fully");
                if (checkAngles(pose5) >= 12)
                {
                    timerValue -= Time.deltaTime;
                }
                else
                {
                    timerValue = 2f;
                }

                if (timerValue <= 0)
                {
                    timerValue = 2f;
                    pose5Check = !pose5Check;
                    pose0Check = !pose0Check;
                    score++;                
                }
            }

        }
    }

    float checkAngles(float[] poseAngles)
    {
        float averageLeft = 0;
        int score = 0;
        for(int i = 0; i <= 13; i++)
        {
            if(poseAngles[i] < 0)
            {
                if(anglesOfHand[i] < Mathf.Abs(poseAngles[i]))
                {
                    score++;
                }
                else
                {
                    averageLeft += Mathf.Abs(anglesOfHand[i] - Mathf.Abs(poseAngles[i]));
                }
            }
            else
            {
                if (anglesOfHand[i] > Mathf.Abs(poseAngles[i]))
                {
                    score++;
                }
                else
                {
                    averageLeft += Mathf.Abs(anglesOfHand[i] - Mathf.Abs(poseAngles[i]));
                }
            }
        }

        averageLeft = averageLeft / (14 - score);
        if (averageLeft >= 30f)
        {
            return 0f;
        }
        else
        {
            return score;
        }
    }

    public float CheckTime()
    {
        return timerValue;
    }
}
