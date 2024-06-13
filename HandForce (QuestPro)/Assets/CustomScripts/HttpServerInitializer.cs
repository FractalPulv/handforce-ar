using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class HttpServerInitializer : MonoBehaviour
{
    //private HttpServer server;

    void Start()
    {
        //server = new HttpServer();
        //server.Start();
        DontDestroyOnLoad(gameObject);  // Ensure this object persists across scene loads
    }

    //void OnApplicationQuit()
    //{
    //    server.Stop();
    //}
}

// Mockup of a simple HTTP server class
//public class HttpServer
//{
//    public void Start()
//    {
//        // Initialize and start your HTTP server here
//        Debug.Log("HTTP Server started");
//    }

//    public void Stop()
//    {
//        // Clean up and stop your HTTP server here
//        Debug.Log("HTTP Server stopped");
//    }
//}
