using UnityEngine;
using TMPro;
using Oculus.Interaction;

public class MugTargetLogic : MonoBehaviour
{
    [SerializeField] int targetCount = 5; // Total count needed
    [SerializeField] int currentCount = 0; // Current count
    [SerializeField] GameObject mugPrefab; // Mug prefab
    [SerializeField] ParticleSystem successParticles; // Particle system for success feedback
    [SerializeField] ParticleSystem finalSuccessParticles; // Particle system for final success feedback
    [SerializeField] TextMeshProUGUI counterText; // TextMeshPro field for displaying the counter
    [SerializeField] float resetSpeed = 2f; // Speed at which the mug moves to the initial position
    public CounterScript WebserverCounter;
    public CounterScript WebserverCounterCompleted;
    public SimpleHttpServer Webserver;
    private Vector3 mugInitialPosition; // Initial position of the mug
    private Quaternion mugInitialRotation; // Initial rotation of the mug
    private bool isResetting = false;
    private Rigidbody mugRigidbody;

    void Start()
    {
        // Save the initial position and rotation of the mug
        if (mugPrefab != null)
        {
            mugInitialPosition = mugPrefab.transform.position;
            mugInitialRotation = mugPrefab.transform.rotation;
        }
        
        UpdateCounterText();
        if (successParticles != null)
        {
            successParticles.Stop(); // Ensure success particles are not playing on start
        }
        if (finalSuccessParticles != null)
        {
            finalSuccessParticles.Stop(); // Ensure final success particles are not playing on start
        }
    }

    void Update()
    {
        if (isResetting && mugRigidbody != null)
        {
            float step = resetSpeed * Time.deltaTime;
            mugRigidbody.transform.position = Vector3.MoveTowards(mugRigidbody.transform.position, mugInitialPosition, step);
            Debug.DrawLine(mugRigidbody.transform.position, mugInitialPosition, Color.red);

            if (Vector3.Distance(mugRigidbody.transform.position, mugInitialPosition) < 0.001f)
            {
                isResetting = false;
                mugRigidbody.velocity = Vector3.zero;
                mugRigidbody.angularVelocity = Vector3.zero;
                mugRigidbody.transform.rotation = mugInitialRotation; // Reset rotation
            }
        }
    }

    void OnTriggerEnter(Collider other)
    {
        Rigidbody rb = other.attachedRigidbody;
        if (rb!= null && rb.CompareTag("Mug"))
        {
            // Temporarily disable the grabbable component to prevent further interaction
            Grabbable grabbableComponent = rb.GetComponent<Grabbable>();
            if (grabbableComponent!= null)
            {
                grabbableComponent.enabled = false;
            }

            mugRigidbody = rb;
            currentCount++;
            // Increase the count
            WebserverCounter.Increment();
            Webserver.SendUpdate(WebserverCounter);
            UpdateCounterText();
            // Update counter text

            if (currentCount >= targetCount)
            {
                WebserverCounterCompleted.Increment();
                Webserver.SendUpdate(WebserverCounterCompleted);
                FinalSuccess(); // Show final success particles
            }
            else
            {
                SuccessFeedback(); // Show success particles
            }

            isResetting = true; // Start resetting the mug position
            // Instantly reset the mug's position to avoid multiple triggers
            mugRigidbody.transform.position = mugInitialPosition;
            mugRigidbody.transform.rotation = mugInitialRotation;
            mugRigidbody.velocity = Vector3.zero;
            mugRigidbody.angularVelocity = Vector3.zero;

            // Re-enable the grabbable component after resetting the position
            if (grabbableComponent!= null)
            {
                grabbableComponent.enabled = true;
            }
        }
    }

    void SuccessFeedback()
    {
        if (successParticles != null)
        {
            successParticles.Play(); // Play success particles
        }
    }

    void FinalSuccess()
    {
        if (finalSuccessParticles != null)
        {
            finalSuccessParticles.Play(); // Play final success particles
        }
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

    public void ResetPosition()
    {
        if (mugRigidbody != null)
        {
            // Stop any ongoing resetting process
            isResetting = false;

            // Reset the position and rotation of the mug
            mugRigidbody.transform.position = mugInitialPosition;
            mugRigidbody.transform.rotation = mugInitialRotation;
            mugRigidbody.velocity = Vector3.zero;
            mugRigidbody.angularVelocity = Vector3.zero;
        }
        else if (mugPrefab != null)
        {
            // If mugRigidbody is null, fallback to resetting the mugPrefab
            mugPrefab.transform.position = mugInitialPosition;
            mugPrefab.transform.rotation = mugInitialRotation;
        }
    }

}
