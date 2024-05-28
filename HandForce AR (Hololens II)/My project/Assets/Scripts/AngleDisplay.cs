using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class AngleDisplay : MonoBehaviour
{
    public GameObject canvasPrefab;

    GameObject[] canvasObjects = new GameObject[14];

    // Start is called before the first frame update
    void Start()
    {
        for (int i = 0; i < canvasObjects.Length; i++)
        {
            canvasObjects[i] = Instantiate(canvasPrefab, transform);
            canvasObjects[i].name = "jointCanvas" + i.ToString();
            //canvasObjects[i].GetComponent<TextMeshPro>().SetText(i.ToString());\
        }

    }

    // Update is called once per frame
    void Update()
    {
    }

    public void display(GameObject[] jointObjects, float[] jointAngles)
    {


        foreach (GameObject canvas in canvasObjects)
        {
            canvas.GetComponentInChildren<TMP_Text>().SetText("");
        }
        if (jointObjects[1].GetComponent<Renderer>().enabled == true)
        {
            for (int i = 0; i <= 1; i++) // 0 1
            {
                //Thumb
                canvasObjects[i].transform.position = jointObjects[i + 3].transform.position + new Vector3(0, 0.01f, 0);
                canvasObjects[i].GetComponentInChildren<TMP_Text>().SetText(jointAngles[i].ToString());
            }

            for (int i = 2; i <= 4; i++) // 2 3 4
            {
                //index
                canvasObjects[i].transform.position = jointObjects[i + 7 - 2].transform.position + new Vector3(0, 0.01f, 0);
                canvasObjects[i].GetComponentInChildren<TMP_Text>().SetText(jointAngles[i].ToString());

                //middle
                canvasObjects[i + 3].transform.position = jointObjects[i + 12 - 2].transform.position + new Vector3(0, 0.01f, 0);
                canvasObjects[i + 3].GetComponentInChildren<TMP_Text>().SetText(jointAngles[i + 3].ToString());

                //ring
                canvasObjects[i + 6].transform.position = jointObjects[i + 17 - 2].transform.position + new Vector3(0, 0.01f, 0);
                canvasObjects[i + 6].GetComponentInChildren<TMP_Text>().SetText(jointAngles[i + 6].ToString());

                //pinkie
                canvasObjects[i + 9].transform.position = jointObjects[i + 22 - 2].transform.position + new Vector3(0, 0.01f, 0);
                canvasObjects[i + 9].GetComponentInChildren<TMP_Text>().SetText(jointAngles[i + 9].ToString());
            }
        }
    }
}
