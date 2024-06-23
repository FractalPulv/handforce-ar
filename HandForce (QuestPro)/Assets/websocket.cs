using System;
using WebSocketSharp.Server;
using UnityEngine;

public class WebSocketService : WebSocketBehavior
{
    protected override void OnMessage(WebSocketSharp.MessageEventArgs e)
    {
        // Handle incoming messages from the client if needed
        Debug.Log("Received from client: " + e.Data);
    }
}