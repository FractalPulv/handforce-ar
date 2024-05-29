using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeacupSaucerSpawnLocation : MonoBehaviour
{
    public GameObject referenceObject;
    // Start is called before the first frame update
    void Start()
    {
        this.transform.position = (referenceObject.transform.forward * 0.5f) + referenceObject.transform.position;
        var pos = transform.position;
        pos.y = transform.position.y - 0.15f;
        transform.position = pos;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
