using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectInFront : MonoBehaviour
{
    public GameObject reference;
    public bool cameraReference;

    //Settings settings;
    // Start is called before the first frame update
    void Start()
    {
        //settings = FindObjectOfType<Settings>();
        if (cameraReference)
        {
            transform.position = Camera.main.transform.position + Camera.main.transform.forward * 0.5f;
        }
        else
        {
            transform.position = reference.transform.position + reference.transform.forward * 0.5f;
        }
    }

    private void OnEnable()
    {
        var pos = Camera.main.transform.position + Camera.main.transform.forward * 0.5f;
        pos.y = Camera.main.transform.position.y;
        transform.position = pos;
    }

    // Update is called once per frame
    void Update()
    {
/*        if (cameraReference)
        {
            transform.LookAt(transform.position + Camera.main.transform.rotation * Vector3.forward, Camera.main.transform.rotation * Vector3.up);
        }
        else
        {
            transform.LookAt(transform.position + reference.transform.rotation * Vector3.forward, reference.transform.rotation * Vector3.up);

        }*/
    }
}
