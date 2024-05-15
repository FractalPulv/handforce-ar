using UnityEngine;
using TMPro;

public class MugTargetLogic : MonoBehaviour
{
    [SerializeField] int targetCount = 5; // Total count needed
    [SerializeField] int currentCount = 0; // Current count
    [SerializeField] GameObject mugPrefab; // Mug prefab
    [SerializeField] Transform mugInitialPosition; // Initial position for the mug
    [SerializeField] ParticleSystem successParticles; // Particle system for success feedback
    [SerializeField] ParticleSystem finalSuccessParticles; // Particle system for final success feedback
    [SerializeField] TextMeshProUGUI counterText; // TextMeshPro field for displaying the counter

    void Start()
    {
        UpdateCounterText();
    }

    void OnTriggerEnter(Collider other)
    {
        Rigidbody rb = other.attachedRigidbody;
        if (rb != null && rb.CompareTag("Mug"))
        {
            currentCount++; // Increase the count
            UpdateCounterText(); // Update counter text
            if (currentCount >= targetCount)
            {
                FinalSuccess(); // Show final success particles
            }
            else
            {
                SuccessFeedback(); // Show success particles
            }
            ResetMugPosition(); // Reset mug position
        }
    }

    void ResetMugPosition()
    {
        GameObject mug = Instantiate(mugPrefab, mugInitialPosition.position, Quaternion.identity);
        Destroy(mug, 0.5f); // Destroy the new mug after some time for visual effect
    }

    void SuccessFeedback()
    {
        successParticles.Play(); // Play success particles
    }

    void FinalSuccess()
    {
        finalSuccessParticles.Play(); // Play final success particles
    }

    // Method to update the counter text
    void UpdateCounterText()
    {
        if (counterText != null)
        {
            counterText.text = currentCount + " / " + targetCount;
        }
    }

    // Method to reset the progress
    public void ResetProgress()
    {
        currentCount = 0; // Reset the count
        UpdateCounterText(); // Update counter text
        // Add any additional reset logic here
    }
}
