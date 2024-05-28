using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Pose : MonoBehaviour
{

    public HandRiging handriging;

    float[] pose0 = { -140, -135, -120, -85, -130, -115, -90, -110, -115, -80, -135, -110, -90, -135 };
    float[] pose1 = { -145, -160, 155, 165, 170, -125, -90, -110, -115, -80, -135, -110, -90, -135 };
    float[] pose2 = { -150, -175, 165, 165, 170, 155, 155, 165, -150, -95, -150, -130, -110, -150 };
    float[] pose3 = { -150, -175, 165, 165, 170, 155, 155, 165, 155, 160, 170, -140, -170, -175 };
    float[] pose4 = { -150, -165, 165, 165, 170, 160, 165, 170, 165, 165, 170, 160, 165, 165 };
    float[] pose5 = { 165 , 170 , 165 , 165, 170 , 165 , 165, 170 , 165 , 165, 170 , 170 , 165, 160  };



    bool pose0Check = false;
    bool pose1Check = false;
    bool pose2Check = false;
    bool pose3Check = false;
    bool pose4Check = false;
    bool pose5Check = true;

    float timerValue = 2f;

    public TMP_Text state;




    float[] anglesOfHand = new float[14];

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (handriging.trackLeftHand || handriging.trackRightHand)
        {
            if (handriging.trackLeftHand) anglesOfHand = handriging.angleJointsLeft;
            if (handriging.trackRightHand) anglesOfHand = handriging.angleJointsRight;

            if (pose0Check)
            {
                state.SetText("Closed Hand");
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
                state.SetText("1 finger");
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
                state.SetText("2 fingers");
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
                state.SetText("3 fingers");
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
                state.SetText("4 fingers");
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
                state.SetText("Open Hand");
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
}
