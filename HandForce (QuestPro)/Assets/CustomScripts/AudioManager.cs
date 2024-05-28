using UnityEngine;

public class AudioManager : MonoBehaviour
{
    private AudioSource audioSource;

    void Start()
    {
        // Get the AudioSource component attached to this GameObject
        audioSource = GetComponent<AudioSource>();

        // Play the audio clip
        audioSource.Play();
    }
}
