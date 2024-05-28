using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class AngleCalculator : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    float Angle(GameObject jointAnglePoint, GameObject anglePointA, GameObject anglePointB){

        Vector3 side1 = (anglePointA.transform.position - jointAnglePoint.transform.position) / 2.0f;
        Vector3 side2 = (anglePointB.transform.position - jointAnglePoint.transform.position) / 2.0f;

        return Vector3.Angle(side1, side2);
    }

    public float[] angleList(GameObject[] jointList)
    {
        float[] listOfAngles = new float[14];

        for(int i = 0; i<=1; i++)// 0 1
        {
            listOfAngles[i] = Angle(jointList[i + 3], jointList[i + 2], jointList[i + 4]);
        }

        for(int i = 2; i <= 4; i++)//2 3 4
        {
            listOfAngles[i] = Angle(jointList[i + 7 - 2], jointList[i + 6 - 2], jointList[i + 8 - 2]);   //2 3 4
            listOfAngles[i + 3] = Angle(jointList[i + 12 - 2], jointList[i + 11 - 2], jointList[i + 13 - 2]); // 5 6 7
            listOfAngles[i + 6] = Angle(jointList[i + 17 - 2], jointList[i + 16 - 2], jointList[i + 18 - 2]); // 8 9 10
            listOfAngles[i + 9] = Angle(jointList[i + 22 - 2], jointList[i + 21 - 2], jointList[i + 23 - 2]); // 11 12 13
        } 

        return listOfAngles;
    }

}
