using UnityEngine;

public class CounterScript : MonoBehaviour
{
    private int count = 0;

    // This function can be selected in the Unity Editor's UI events
    public void IncrementCounter()
    {
        count++;
        Debug.Log("Counter incremented: " + count);
    }

    // Another example function
    public void ResetCounter()
    {
        count = 0;
        Debug.Log("Counter reset.");
    }
    
    public int Count()
    {
    	return count;
    }
}
