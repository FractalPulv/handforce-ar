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
    
    public static SimpleHttpServer Instance { get; private set; }

    public CounterScript counter1;
    public CounterScript counter2;
    public CounterScript counter3;
    public CounterScript counter4;
    public CounterScript counter5;
    public CounterScript counter6;

    public List<CounterScript> CounterList_cup;
    public List<CounterScript> CounterList_pose;
    // Variables to be injected into the HTML file
    public string username = "Player";

    public string authUsername = "admin";
    public string authPassword = "password";

    public string currentScene = "Unknown";

    public int Scene = 0;

    private void Awake()
    {
        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            Instance = this;
            DontDestroyOnLoad(gameObject);
        }
    }

    void Start()
    {
        string[] htmlFileNames = {"mainMenu.html","sceneOne.html","index.html"};
        string htmlFileName = "mainMenu.html";
        counter1.type_change("1");
        counter2.type_change("2");
        counter3.type_change("3");
        counter4.type_change("4");
        counter5.type_change("5");
        counter6.type_change("completed");
        cup_counter.type_change("count");
        cup_complete.type_change("completed");

        CounterList_pose.Add(counter1);
        CounterList_pose.Add(counter2);
        CounterList_pose.Add(counter3);
        CounterList_pose.Add(counter4);
        CounterList_pose.Add(counter5);
        CounterList_pose.Add(counter6);

        CounterList_cup.Add(cup_counter);
        CounterList_cup.Add(cup_complete);
        
        
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
            jsFilePath = Path.Combine(Application.streamingAssetsPath, "index.js");
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
            response.ContentType = "application/javascript";
        }
        else if (context.Request.Url.AbsolutePath == "/cup-content")
        {
            responseString = cup_content();
            response.ContentType = "application/json";
        }
        else if (context.Request.Url.AbsolutePath == "/pose-content")
        {
            responseString = pose_content();
            response.ContentType = "application/json";
        }
        else if (context.Request.Url.AbsolutePath == "/current-exercise")
        {
            responseString = current_exercise();
            response.ContentType = "application/json";
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
                Debug.LogError("ja file not found at path: " + jsFilePath);
                return "/* 404 - js File Not Found */";
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
        string[] counters = {cup_complete.ToJson(),cup_counter.ToJson()};
        return ArrayOfJsonStringsToJson(counters);
    }

    private string pose_content()
    {
        // string message = "{";
        string[] counters = new string[6];
        counters[0] = counter1.ToJson();
        counters[1] = counter2.ToJson();
        counters[2] = counter3.ToJson();
        counters[3] = counter4.ToJson();
        counters[4] = counter5.ToJson();
        counters[5] = counter6.ToJson();
        // foreach (CounterScript counter in counters){
        Debug.Log(counter1.ToJson());
            return ArrayOfJsonStringsToJson(counters);
        // }
        // return message + "}";
    }

    public string current_exercise()
    {
        string WS_response = "{\"type\":\"exercise\",\"value\":\""+currentScene+"\"}";
        SendUpdateString(WS_response);
        return WS_response;
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

    public void SendUpdateString(string text)
    {
        foreach (var session in wsServer.WebSocketServices["/ws"].Sessions.Sessions)
        {
            session.Context.WebSocket.Send(text);
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

    // Convert array of JSON strings to a large JSON
    string ArrayOfJsonStringsToJson(string[] jsonStrings)
    {
        // Create an array of objects
        MyData[] dataArray = new MyData[jsonStrings.Length];
        for (int i = 0; i < jsonStrings.Length; i++)
        {
            dataArray[i] = JsonUtility.FromJson<MyData>(jsonStrings[i]);

        }

        // Convert array of objects to a JSON string
        Wrapper<MyData> wrapper = new Wrapper<MyData>();
        wrapper.array = dataArray;
        return JsonUtility.ToJson(wrapper);
    }

    // Wrapper class
    [System.Serializable]
    private class Wrapper<T>
    {
        public T[] array;
    }

    [System.Serializable]
    public class MyData
    {
        public string type;
        public int count;
    }
}