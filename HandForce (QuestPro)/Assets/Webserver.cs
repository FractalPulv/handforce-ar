using System;
using System.IO;
using System.Net;
using System.Text;
using System.Threading;
using UnityEngine;
using UnityEngine.Networking; // Add this directive
using System.Collections;
using WebSocketSharp.Server;
using WebSocketSharp;
using System.Text.RegularExpressions;
using Unity.VisualScripting;
using System.Collections.Generic;



public class SimpleHttpServer : MonoBehaviour
{
    private HttpListener listener;
    private Thread listenerThread;
    private string htmlFilePath;
    private string cssFilePath;
    private string jsFilePath;
    private WebSocketServer wsServer;

    public CounterScript cup_counter;
    public CounterScript cup_complete;


    public CounterScript counter1;
    public CounterScript counter2;
    public CounterScript counter3;
    public CounterScript counter4;
    public CounterScript counter5;
    public CounterScript counter6;

    // Variables to be injected into the HTML file
    public string username = "Player";

    public string authUsername = "admin";
    public string authPassword = "password";

    public int Scene = 0;

    void Start()
    {
        string[] htmlFileNames = {"mainMenu.html","sceneOne.html","index.html"};
        string htmlFileName = "mainMenu.html";
        counter1.type = "1";
        counter2.type = "2";
        counter3.type = "3";
        counter4.type = "4";
        counter5.type = "5";
        counter6.type = "completed";
        cup_counter.type = "count";
        cup_complete.type = "completed";
        
        #if UNITY_ANDROID && !UNITY_EDITOR
            htmlFilePath = Path.Combine(Application.persistentDataPath, htmlFileName);
            cssFilePath = Path.Combine(Application.persistentDataPath, "style.css");
            jsFilePath = Path.Combine(Application.persistentDataPath, "index.js");
            for (int i = 0; i < htmlFileNames.Length; i++){
                StartCoroutine(CopyStreamingAssetsToPersistentDataPath(htmlFileNames[i]));
                StartCoroutine(CopyStreamingAssetsToPersistentDataPath("style.css"));
                StartCoroutine(CopyStreamingAssetsToPersistentDataPath("index.js"));
            }
        #else
            htmlFilePath = Path.Combine(Application.streamingAssetsPath, htmlFileName);
            cssFilePath = Path.Combine(Application.streamingAssetsPath, "style.css");
            jsFilePath = Path.Combine(Application.persistentDataPath, "index.js");
        #endif

        // Initialize HttpListener
        listener = new HttpListener();
        listener.Prefixes.Add("http://*:8080/");
        listener.Start();

        // Start listener thread
        listenerThread = new Thread(new ThreadStart(HandleRequests));
        listenerThread.IsBackground = true;
        listenerThread.Start();

        Debug.Log("Server started on http://localhost:8080");
        wsServer = new WebSocketServer(8081);
        wsServer.AddWebSocketService<WebSocketService>("/ws");
        wsServer.Start();

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
        string responseString = "";

        // Check for Authorization header
        if (!IsAuthorized(context))
        {
            response.StatusCode = 401;
            response.AddHeader("WWW-Authenticate", "Basic realm=\"User Visible Realm\"");
            responseString = "<html><body><h1>401 Unauthorized</h1></body></html>";
            byte[] unauthorizedBuffer = Encoding.UTF8.GetBytes(responseString); // Renamed to unauthorizedBuffer
            response.ContentLength64 = unauthorizedBuffer.Length;
            response.OutputStream.Write(unauthorizedBuffer, 0, unauthorizedBuffer.Length);
            response.OutputStream.Close();
            return;
        }

        // Determine which file is being requested
        if (context.Request.Url.AbsolutePath == "/" || context.Request.Url.AbsolutePath == "/index.html")
        {
            responseString = LoadHtmlFile();
            responseString = InjectVariables(responseString);
            response.ContentType = "text/html";
        }
        else if (context.Request.Url.AbsolutePath == "/style.css")
        {
            responseString = LoadCssFile();
            response.ContentType = "text/css";
        }
        else if (context.Request.Url.AbsolutePath == "/index.js")
        {
            responseString = LoadJsFile();
            response.ContentType = "text/js";
        }
        else if (context.Request.Url.AbsolutePath == "/cup-content")
        {

        }
        else if (context.Request.Url.AbsolutePath == "/pose-content")
        {
            responseString = pose_content();
            response.ContentType = "text/json";
        }
        else
        {
            responseString = "<html><body><h1>404 - File Not Found</h1></body></html>";
            response.ContentType = "text/html";
            response.StatusCode = 404;
        }

        byte[] buffer = Encoding.UTF8.GetBytes(responseString);
        response.ContentLength64 = buffer.Length;
        response.OutputStream.Write(buffer, 0, buffer.Length);
        response.OutputStream.Close();
    }

    private bool IsAuthorized(HttpListenerContext context)
    {
        string authHeader = context.Request.Headers["Authorization"];

        if (authHeader != null && authHeader.StartsWith("Basic"))
        {
            string encodedUsernamePassword = authHeader.Substring("Basic ".Length).Trim();
            string usernamePassword = Encoding.UTF8.GetString(Convert.FromBase64String(encodedUsernamePassword));

            int separatorIndex = usernamePassword.IndexOf(':');
            if (separatorIndex >= 0)
            {
                string username = usernamePassword.Substring(0, separatorIndex);
                string password = usernamePassword.Substring(separatorIndex + 1);

                return username == authUsername && password == authPassword;
            }
        }

        return false;
    }

    private string LoadHtmlFile()
    {
        try
        {
            if (File.Exists(htmlFilePath))
            {
                return File.ReadAllText(htmlFilePath);
            }
            else
            {
                Debug.LogError("HTML file not found at path: " + htmlFilePath);
                return "<html><body><h1>404 - HTML File Not Found</h1></body></html>";
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error reading HTML file: " + e.Message);
            return "<html><body><h1>500 - Internal Server Error</h1></body></html>";
        }
    }

    private string LoadCssFile()
    {
        try
        {
            if (File.Exists(cssFilePath))
            {
                return File.ReadAllText(cssFilePath);
            }
            else
            {
                Debug.LogError("CSS file not found at path: " + cssFilePath);
                return "/* 404 - CSS File Not Found */";
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error reading CSS file: " + e.Message);
            return "/* 500 - Internal Server Error */";
        }
    }

    private string LoadJsFile()
    {
        try
        {
            if (File.Exists(jsFilePath))
            {
                return File.ReadAllText(jsFilePath);
            }
            else
            {
                Debug.LogError("CSS file not found at path: " + jsFilePath);
                return "/* 404 - CSS File Not Found */";
            }
        }
        catch (Exception e)
        {
            Debug.LogError("Error reading CSS file: " + e.Message);
            return "/* 500 - Internal Server Error */";
        }
    }

    private string cup_content()
    {
        string message = "{";
        CounterScript[] counters = {cup_complete,cup_counter};
        foreach (CounterScript counter in counters){
            message = message + JsonUtility.ToJson(counter);
        }
        return message + "}";
    }

    private string pose_content()
    {
        string message = "{";
        CounterScript[] counters = {counter1,counter2,counter3,counter4,counter5,counter6};
        foreach (CounterScript counter in counters){
            message = message + JsonUtility.ToJson(counter);
        }
        return message + "}";
    }

    private string InjectVariables(string html)
    {
        // Replace placeholders with actual values
        html = html.Replace("${username}", username);
        html = html.Replace("${score1}", counter1.get_count().ToString());
        html = html.Replace("${score2}", counter2.get_count().ToString());
        html = html.Replace("${score3}", counter3.get_count().ToString());
        html = html.Replace("${score4}", counter4.get_count().ToString());
        html = html.Replace("${score5}", counter5.get_count().ToString());
        html = html.Replace("${score6}", counter6.get_count().ToString());
        return html;
    }

    private IEnumerator CopyStreamingAssetsToPersistentDataPath(string fileName)
    {
        string sourcePath = Path.Combine(Application.streamingAssetsPath, fileName);
        string destinationPath = Path.Combine(Application.persistentDataPath, fileName);

        // if (File.Exists(destinationPath))
        // {
        //     yield break; // File already exists, no need to copy
        // }

        using (UnityWebRequest webRequest = UnityWebRequest.Get(sourcePath))
        {
            yield return webRequest.SendWebRequest();

            if (webRequest.result == UnityWebRequest.Result.ConnectionError || webRequest.result == UnityWebRequest.Result.ProtocolError)
            {
                Debug.LogError($"Error copying {fileName} from StreamingAssets to persistent data path: {webRequest.error}");
            }
            else
            {
                File.WriteAllBytes(destinationPath, webRequest.downloadHandler.data);
                Debug.Log($"Copied {fileName} to persistent data path");
            }
        }
        
    }

    public void SendUpdate(CounterScript counter)
    {
        var updateMessage = JsonUtility.ToJson(counter);
        Debug.Log(updateMessage);
        foreach (var session in wsServer.WebSocketServices["/ws"].Sessions.Sessions)
        {
            session.Context.WebSocket.Send(updateMessage);
        }
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
        if (wsServer != null)
        {
            wsServer.Stop();
        }
    }
}