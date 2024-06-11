using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreHandler : MonoBehaviour
{
    public TMP_Text scoreText;
    public StopWatch stopWatch;
    public GameObject gameUI;
    public GameObject gameObjects;
    public GameObject endingUI;

    int score = 0;

    // Start is called before the first frame update
    void Start()
    {
        score = 0;
        scoreText.text = score.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        if(score >= 10)
        {
            stopWatch.StopTimer();
            gameUI.SetActive(false);
            gameObjects.SetActive(false);
            endingUI.SetActive(true);
        }
    }

    public void resetScore()
    {
        score = 0;
        scoreText.text = score.ToString();
    }
    
    public void updateScore()
    {
        score += 1;
        scoreText.text = score.ToString();
    }
}
