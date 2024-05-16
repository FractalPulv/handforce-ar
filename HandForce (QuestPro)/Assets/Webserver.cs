
using System;
using System.Net;
using System.Text;
using System.Threading;
using UnityEngine;

public class SimpleHttpServer : MonoBehaviour
{
    private HttpListener listener;
    private Thread listenerThread;
    public CounterScript counterScript;
    //private const string html = "<html><body><h1>hello</h1></body></html>";
    

    void Start()
    {
    	
    	
        // Initialize HttpListener
        listener = new HttpListener();
        listener.Prefixes.Add("http://*:8080/");
        listener.Start();

        // Start listener thread
        listenerThread = new Thread(new ThreadStart(HandleRequests));
        listenerThread.IsBackground = true;
        listenerThread.Start();

        Debug.Log("Server started on http://localhost:8080");
    }

    private void HandleRequests()
    {
        while (listener.IsListening)
        {
            try
            {
                var context = listener.GetContext(); // Blocking call
                ProcessRequest(context);
            }
            catch (HttpListenerException e)
            {
                Debug.LogError($"HttpListenerException: {e.Message}");
            }
            catch (Exception e)
            {
                Debug.LogError($"Exception: {e.Message}");
            }
        }
    }

    private void ProcessRequest(HttpListenerContext context)
    {
        var response = context.Response;
        string count = counterScript.Count().ToString();
	string html = "<html><body><h1>Times: "+count+"</h1></body></html>";
        byte[] buffer = Encoding.UTF8.GetBytes(html);
        response.ContentLength64 = buffer.Length;
        response.OutputStream.Write(buffer, 0, buffer.Length);
        response.OutputStream.Close();
    }

    void OnDestroy()
    {
        if (listener != null && listener.IsListening)
        {
            listener.Stop();
            listener.Close();
        }

        if (listenerThread != null && listenerThread.IsAlive)
        {
            listenerThread.Abort();
        }
    }
}
