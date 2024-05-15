using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR;

public class OpenMenu : MonoBehaviour
{
    public GameObject menuUI;

    private bool menuVisible = false;

    void Update()
    {
        // Check for input to toggle menu visibility
        if (Input.GetKeyDown(KeyCode.Menu) || OVRInput.GetDown(OVRInput.Button.Start))
        {
            ToggleMenu();
        }
    }

    void ToggleMenu()
    {
        // Toggle menu visibility
        menuVisible = !menuVisible;
        menuUI.SetActive(menuVisible);

        // Toggle VR input
        if (menuVisible)
        {
            // Disable VR input
            XRSettings.enabled = false;
        }
        else
        {
            // Re-enable VR input
            XRSettings.enabled = true;
        }
    }
}
