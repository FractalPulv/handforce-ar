using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Settings : MonoBehaviour
{
    public float SoundVolume { get; set; }
    public float EffectVolume { get; set; }
    public bool English { get; set; }
    public bool Dutch { get; set; }
    public bool LeftHand { get; set; }
    public bool RightHand { get; set; }
    public float UIDistance { get; set; }

    private void Start()
    {
        SoundVolume = 0.5f;
        EffectVolume = 0.5f;
        UIDistance = 0.5f;

        English = true;

        LeftHand = true;
    }
}
