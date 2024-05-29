using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInFront : MonoBehaviour
{
    public GameObject reference;
    // Start is called before the first frame update
    void Start()
    {
        transform.position = reference.transform.position + reference.transform.forward * 0.6f;
    }

    // Update is called once per frame
    void Update()
    {
        transform.LookAt(transform.position + reference.transform.rotation * Vector3.forward, reference.transform.rotation * Vector3.up);
    }
}
