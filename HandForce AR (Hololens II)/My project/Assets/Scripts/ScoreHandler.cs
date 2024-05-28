using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreHandler : MonoBehaviour
{
    public static ScoreHandler instance;

    public TMP_Text scoreText;

    int score = 0;

    private void Awake()
    {
        instance = this;
        scoreText = GetComponent<TMP_Text>();
    }

    // Start is called before the first frame update
    void Start()
    {
        scoreText.text = "Score: " + score.ToString();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void resetScore()
    {
        score = 0;
        scoreText.text = "Score: " + score.ToString();
    }
    
    public void updateScore()
    {
        score += 1;
        scoreText.text = "Score: " + score.ToString();
        ResetCubes.instance.rndReset();
    }
}
