using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CollisionHandler : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "TriggerZone")
        {
            Debug.Log(this.GetComponent<Rigidbody>().velocity);

            //if (this.GetComponent<Rigidbody>().velocity == Vector3.zero)
            //{
                ScoreHandler.instance.updateScore();
            //}
        }
    }
}
