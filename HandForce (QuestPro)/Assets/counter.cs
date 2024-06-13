using UnityEngine;
using System;

[System.Serializable]
public class CounterScript : MonoBehaviour
{
    public int count = 0;
    public String type = "Default";
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

    public void type_change(string name)
    {
        type = name;
    }

    public void count_change(int name)
    {
        count = 0;
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

    public string ToJson()
    {
        return JsonUtility.ToJson(this);
    }
}