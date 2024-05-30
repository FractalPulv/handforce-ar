using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;

public class PoseMaintainLogic : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI _label1;
    [SerializeField]
    private TextMeshProUGUI _label2;
    [SerializeField]
    private TextMeshProUGUI _label3;
    [SerializeField]
    private TextMeshProUGUI _label4;
    [SerializeField]
    private TextMeshProUGUI _label5;

    [SerializeField]
    private Image _progressIndicator;

    private const float requiredHoldTime = 3f;
    private float holdTimer = 0f;
    private bool isPoseHeld = false;
    private string currentPose;

    private HashSet<string> completedPoses = new HashSet<string>();

    void Update()
    {
        if (isPoseHeld)
        {
            holdTimer += Time.deltaTime;
            _progressIndicator.fillAmount = holdTimer / requiredHoldTime;

            if (holdTimer >= requiredHoldTime)
            {
                PoseHeldComplete();
            }
        }
        else
        {
            holdTimer = 0f;
            _progressIndicator.fillAmount = 0f;
        }
    }

    public void OnPoseDetected(string pose)
    {
        isPoseHeld = true;
        currentPose = pose;
    }

    public void OnPoseLost()
    {
        isPoseHeld = false;
    }

    private void PoseHeldComplete()
    {
        isPoseHeld = false;
        _progressIndicator.fillAmount = 1f;
        completedPoses.Add(currentPose);

        switch (currentPose)
        {
            case "Sign 1":
                _label1.color = Color.blue;
                break;
            case "Sign 2":
                _label2.color = Color.blue;
                break;
            case "Sign 3":
                _label3.color = Color.blue;
                break;
            case "Sign 4":
                _label4.color = Color.blue;
                break;
            case "Sign 5":
                _label5.color = Color.blue;
                break;
        }

        if (completedPoses.Count == 5)
        {
            ResetColors();
        }
    }

    private void ResetColors()
    {
        _label1.color = Color.white; // Reset to original color
        _label2.color = Color.white;
        _label3.color = Color.white;
        _label4.color = Color.white;
        _label5.color = Color.white;
        completedPoses.Clear();
    }

    public void OnSign1Detected()
    {
        OnPoseDetected("Sign 1");
    }

    public void OnSign2Detected()
    {
        OnPoseDetected("Sign 2");
    }

    public void OnSign3Detected()
    {
        OnPoseDetected("Sign 3");
    }

    public void OnSign4Detected()
    {
        OnPoseDetected("Sign 4");
    }

    public void OnSign5Detected()
    {
        OnPoseDetected("Sign 5");
    }
}
