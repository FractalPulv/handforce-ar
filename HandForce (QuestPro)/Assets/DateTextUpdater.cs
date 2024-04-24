using UnityEngine;
using TMPro;
using System;

public class DateTextUpdater : MonoBehaviour
{
    private TextMeshProUGUI textMeshPro;

    private void Start()
    {
        textMeshPro = GetComponent<TextMeshProUGUI>();
        if (textMeshPro == null)
        {
            Debug.LogError("DateTextUpdater script requires a TextMeshProUGUI component attached to the same GameObject.");
            return;
        }

        UpdateDateText();
    }

    private void UpdateDateText()
    {
        // Get the current date
        DateTime currentDate = DateTime.Now;

        // Format the date as you desire
        string formattedDate = currentDate.ToString("dd MMMM yyyy");

        // Update the TextMeshPro text
        textMeshPro.text = formattedDate;
    }
}
