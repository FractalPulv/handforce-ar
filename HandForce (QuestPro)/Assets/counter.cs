using UnityEngine;
using System;

public class CounterScript : MonoBehaviour
{
    private int count;
    public event Action<int> OnCountChanged;

    public int Count
    {
        get { return count; }
        set
        {
            if (count != value)
            {
                count = value;
                OnCountChanged?.Invoke(count);
            }
        }
    }

    public int get_count(){
        return count;
    }

    public void Increment()
    {
        Count++;
    }

    public void Decrement()
    {
        Count--;
    }
}