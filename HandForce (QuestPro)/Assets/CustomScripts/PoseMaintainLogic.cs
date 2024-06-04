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


    [SerializeField]
    private CounterScript _counter1;
    [SerializeField]
    private CounterScript _counter2;
    [SerializeField]
    private CounterScript _counter3;
    [SerializeField]
    private CounterScript _counter4;
    [SerializeField]
    private CounterScript _counter5;
    [SerializeField]
    private CounterScript _counter6;
    [SerializeField]
    private SimpleHttpServer _httpServer;

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
                _counter1.Increment();
                _httpServer.SendUpdate(_counter1);
                _label1.color = Color.blue;
                break;
            case "Sign 2":
                _counter2.Increment();
                _httpServer.SendUpdate(_counter2);
                _label2.color = Color.blue;
                break;
            case "Sign 3":
                _counter3.Increment();
                _httpServer.SendUpdate(_counter3);
                _label3.color = Color.blue;
                break;
            case "Sign 4":
                _counter4.Increment();
                _httpServer.SendUpdate(_counter4);
                _label4.color = Color.blue;
                break;
            case "Sign 5":
                _counter5.Increment();
                _httpServer.SendUpdate(_counter5);
                _label5.color = Color.blue;
                break;
        }

        if (completedPoses.Count == 5)
        {
            _counter6.Increment();
            _httpServer.SendUpdate(_counter6);
            _counter1.count = 0;
            _counter2.count = 0;
            _counter3.count = 0;
            _counter4.count = 0;
            _counter5.count = 0;
            _httpServer.SendUpdate(_counter1);
            _httpServer.SendUpdate(_counter2);
            _httpServer.SendUpdate(_counter3);
            _httpServer.SendUpdate(_counter4);
            _httpServer.SendUpdate(_counter5);
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
