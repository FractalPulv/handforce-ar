using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeaCupSpawnLocation : MonoBehaviour
{
    public GameObject referenceObject;
    // Start is called before the first frame update
    void Start()
    {
        this.transform.position = referenceObject.transform.position + new Vector3(0, 0.20f, 0);
    }

    // Update is called once per frame
    void Update()
    {

    }

    public void Move()
    {
        this.transform.position = referenceObject.transform.position + new Vector3(Random.Range(-0.25f, 0.25f), Random.Range(-0.1f, 0.1f), Random.Range(0, 0.50f));
        transform.rotation = new Quaternion(0, 0, 0, 1);
        this.GetComponent<Rigidbody>().velocity = Vector3.zero;
        this.GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
        this.GetComponent<Rigidbody>().useGravity = false;
    }
}
