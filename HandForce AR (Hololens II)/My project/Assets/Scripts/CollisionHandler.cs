using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHandler : MonoBehaviour
{
    public Manipulator manipulator;
    public TeaCupSpawnLocation teaCup;
    public ScoreHandler scoreHandler;

    float timer = 2.0f;
    bool trigger = false;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (trigger)
        {
            manipulator.disableManipulator();

            if (timer >= 0)
            {
                timer -= Time.deltaTime;
            }
            else
            {
                //ScoreHandler.instance.updateScore();
                teaCup.Move();
                scoreHandler.updateScore();
                manipulator.enableManipulator();
                timer = 2.0f;
                trigger = false;
            }
        }
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "TriggerZone")
        {
            trigger = true;
        }
    }
}
