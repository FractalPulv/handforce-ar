// WebSocket client
var URL = window.location.hostname + ":";
var WebSocketType = "ws";
var refreshCheck = false;

if (window.location.protocol === "https:") {
    WebSocketType = "wss";
    URL = URL + window.location.port;
} else {
    var port = parseInt(window.location.port, 10) + 1;
    URL = URL + port;
}

console.log(URL);

var socket;
function websocket_connect() {
    console.log("Trying to connect to WebSocket at " + WebSocketType + "://" + URL + "/ws");

    socket = new WebSocket(WebSocketType + "://" + URL + "/ws");

    socket.onmessage = function(event) {
        console.log('Received WebSocket message:', event.data);
        var data = JSON.parse(event.data);
        document.getElementById("score" + data.type).innerText = "Score " + data.type + ": " + data.count;
    };

    socket.onopen = function(event) {
        console.log("WebSocket connection established");
        if (refreshCheck) {
            console.log("Refreshing");
            location.reload();
        }
        refreshCheck = false; // Reset refresh check on successful connection
    };

    socket.onclose = function(event) {
        console.log("WebSocket connection closed");
        setTimeout(websocket_connect, 500); // Retry connection every 2 seconds
        refreshCheck = true;
    };

    socket.onerror = function(error) {
        console.error("WebSocket error:", error);
    };
}

// Initial WebSocket connection attempt
websocket_connect();


// document.getElementById('sendRequestButton').addEventListener('click', function() {
//     // Replace with your target URL
//     const url = window.location.protocol+'//'+window.location.hostname+":"+window.location.port+'/increment';
//     fetch(url, {
//         method: 'GET', 
//         headers: {
//             'Content-Type': 'application/json'
//         }
//     })
// });