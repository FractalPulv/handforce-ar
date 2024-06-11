using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using MixedReality.Toolkit.UX;

public class SettingsHandler : MonoBehaviour
{
    Settings settings;
    public Slider music;
    public Slider effect;
    public Slider ui;
    public PressableButton english;
    public PressableButton dutch;

    private void OnEnable()
    {
        
    }

    private void Start()
    {
        settings = FindObjectOfType<Settings>();
    }

    public void UpdateValues()
    {
        settings.Dutch = dutch.IsToggled;
        settings.English = english.IsToggled;

        settings.SoundVolume = music.Value;
        settings.EffectVolume = effect.Value;
        settings.UIDistance = ui.Value;
    }
}
