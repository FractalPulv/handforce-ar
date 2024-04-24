using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus;
using TMPro;

public class FingerTracking : MonoBehaviour
{
    public OVRHand hand;
    public OVRHand.HandFinger finger;
    public float fingerExtension;
    public float fingerExtensionPercentage;
    public TextMeshProUGUI text;

    void Start()
    {
        text = GetComponent<TextMeshProUGUI>();
        hand = GetComponent<OVRHand>();
        finger = OVRHand.HandFinger.Index;
        UpdateFingerExtension();
    }

    void Update()
    {
        UpdateFingerExtension();
        text.text = "Finger Extension: " + fingerExtensionPercentage + "%";

        // Visual debugging: Change the color of the text based on the finger extension
        if (fingerExtensionPercentage > 50)
        {
            text.color = Color.green;
        }
        else
        {
            text.color = Color.red;
        }
    }

    void UpdateFingerExtension()
    {
        // Check if the hand is being tracked
        if (hand.IsSystemGestureInProgress)
        {
            // Assuming GetFingerPinchStrength returns a value between 0 and 1
            fingerExtension = hand.GetFingerPinchStrength(finger);
            fingerExtensionPercentage = fingerExtension * 100;
        }
    }
}
