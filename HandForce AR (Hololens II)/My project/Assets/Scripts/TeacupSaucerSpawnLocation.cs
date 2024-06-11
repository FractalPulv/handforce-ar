using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TeacupSaucerSpawnLocation : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
    }

    private void OnEnable()
    {
        transform.position = (Camera.main.transform.forward * 0.5f) + Camera.main.transform.position;
        var pos = transform.position;
        pos.y = transform.position.y - 0.15f;
        transform.position = pos;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
