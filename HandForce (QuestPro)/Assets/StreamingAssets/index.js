// scripts.js
let last_json = "";
let follow_current = true;
document.addEventListener('DOMContentLoaded', () => {
    document.getElementById("radio1").checked = true;
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
        const chatBtn = document.getElementById('chat-btn');
        socket.onmessage = function (event) {

            console.log('Received WebSocket message:', event.data);
            var data = JSON.parse(event.data);
            if (data.type === "exercise") {
                const cupDiv = document.getElementById(`cup_live`);
                const poseDiv = document.getElementById(`pose_live`);
                if (data.value === "Cup Exercise") {
                    cupDiv.className = "visible";
                    poseDiv.className = "hidden";
                    if (follow_current) {
                        load_cup();
                    }
                }
                else if (data.value === "Pose Exercise") {
                    cupDiv.className = "hidden";
                    poseDiv.className = "visible";
                    if (follow_current) {
                        load_poses();
                    }
                }
                else {
                    cupDiv.className = "hidden";
                    poseDiv.className = "hidden";
                }
                UpdateCurrentExercise(data, "Currently In");
            }
            var type = data.type;
            var p = document.createElement("p");
            p.textContent = `Score ${data.type}: ${data.count}`;
            p.id = `type-${type}`;
            document.getElementById(`type-${type}`).replaceWith(p);
        };

        socket.onopen = function (event) {
            console.log("WebSocket connection established");
            const cupDiv = document.getElementById(`cup_unavailable`);
            const poseDiv = document.getElementById(`pose_unavailable`);
            cupDiv.className = "hidden";
            poseDiv.className = "hidden";
            chatBtn.style.backgroundColor = 'green';
            document.getElementById("chat-btn").title = "WebSocket is CONNECTED ✅"
            if (refreshCheck) {
                console.log("Refreshing");
                clearTimeout(websocket_connect);
            }
            UpdateCurrentExercise(last_json, "Currently In");
            refreshCheck = false; // Reset refresh check on successful connection
        };

        socket.onclose = function (event) {
            console.log("WebSocket connection closed");
            chatBtn.style.backgroundColor = 'red';
            document.getElementById("chat-btn").title = "WebSocket is DISCONNECTED ❌"
            setTimeout(websocket_connect, 500); // Retry connection every 2 seconds
            refreshCheck = true;
            const cupDiv = document.getElementById(`cup_live`);
            const poseDiv = document.getElementById(`pose_live`);
            cupDiv.className = "hidden";
            poseDiv.className = "hidden";
            UpdateCurrentExercise(last_json, "Last Seen");
        };

        socket.onerror = function (error) {
            console.error("WebSocket error:", error);
        };
    }

    // Initial WebSocket connection attempt
    websocket_connect();

    const userSelect = document.getElementsByName('user');
    const manualDiffInput = document.getElementById('manual-diff');
    const exercises = document.querySelectorAll('.exercise');
    let selectedExercise = 1;

    console.log("Document loaded and event listeners attached.");

    userSelect.forEach(user => {
        user.addEventListener('change', (event) => {
            const selectedUser = event.target.value;
            console.log(`User changed to: ${selectedUser}`);
            if (selectedUser == 2){
                load_image();
            }
            else if (selectedUser == 1){
                load_exercise();
            }
            else{
                alert(`Error: Selected user: \'${selectedUser}\' not found!`);
                document.getElementById("radio1").checked = true;
            }
            socket.send(JSON.stringify({ type: 'userChange', user: selectedUser }));
        });
    });

    manualDiffInput.addEventListener('input', (event) => {
        const manualDiff = event.target.value;
        console.log(`Manual difficulty changed to: ${manualDiff}`);
        socket.send(JSON.stringify({ type: 'manualDifficultyChange', difficulty: manualDiff }));
    });


    exercises.forEach(exercise => {
        exercise.addEventListener('click', () => {
            const exerciseId = exercise.id.split('-')[1];
            selectedExercise = exerciseId;
            exercises.forEach(ex => ex.classList.remove('active'));
            exercise.classList.add('active');
            console.log(`Exercise ${exerciseId} selected.`);
            follow_current = false;
            if (exerciseId == 1) {
                load_cup();
            }
            else if (exerciseId == 2) {
                load_poses();
            }
            socket.send(JSON.stringify({ type: 'exerciseChange', exercise: exerciseId }));
        });
    });
    load_exercise();
});

function load_poses() {
    const poseDiv = document.getElementById(`pose_unavailable`);
    fetch('/pose-content')
        .then(response => response.json())
        .then(data => {
            poseDiv.className = "hidden";
            updateExerciseStats(data, '<h1> Stats for Pose Exercise</h1>',true);
        })
        .catch(error => {
            console.error('Error:', error);
            poseDiv.className = "unavailable";
        });
}

function load_cup() {
    const cupDiv = document.getElementById(`cup_unavailable`);
    fetch('/cup-content')
        .then(response => response.json())
        .then(data => {
            console.log(data);
            cupDiv.className = "hidden";
            updateExerciseStats(data, '<h1> Stats for Cup Exercise</h1>',true);
        })
        .catch(error => {
            console.error('Error:', error);
            cupDiv.className = "unavailable";
        });
}

function load_exercise() {
    fetch('/current-exercise')
        .then(response => response.json())
        .then(data => {
            UpdateCurrentExercise(data, "Last Seen");
            if (data.value === "Cup Exercise") {
                if (follow_current) {
                    load_cup();
                }
            }
            else if (data.value === "Pose Exercise") {
                if (follow_current) {
                    load_poses();
                }
            }
            else {
                updateExerciseStats("{}","<h1>  Select an Exercise Below to View Stats </h1>",false);
            }
        })
        .catch(error => {
            console.error('Error:', error);
        });
}

function UpdateCurrentExercise(jsonData, text) {
    last_json = jsonData;
    const currentExerciseDiv = document.getElementById(`current_exercise`);
    const span = document.createElement('span');
    span.id = `current_exercise`;
    span.className = "subtitle";
    span.textContent = `${text}: ${jsonData.value}`;
    currentExerciseDiv.replaceWith(span);
}

function load_image() {
    const exerciseStatsDiv = document.getElementById('exercise-stats');

    const tempDiv = document.createElement('div');
    tempDiv.style.position = 'absolute';
    tempDiv.style.visibility = 'hidden';
    tempDiv.style.height = 'auto';
    tempDiv.style.width = exerciseStatsDiv.clientWidth + 'px';

    tempDiv.innerHTML = "<h1> Joris, Luc, Luca, Nikola, Wouter, Youp </h1>";
    const p = document.createElement('img');
    p.id = `img`;
    p.src = 'https://i.imgur.com/nc3Zenr.jpeg';
    p.style = 'width: 50%'
    tempDiv.appendChild(p);  
    document.body.appendChild(tempDiv);
    setTimeout(function() {
        const newHeight = tempDiv.clientHeight;
        document.body.removeChild(tempDiv);

        exerciseStatsDiv.style.height = exerciseStatsDiv.clientHeight + 'px';
        exerciseStatsDiv.offsetHeight;
        exerciseStatsDiv.innerHTML = "<h1> Joris, Luc, Luca, Nikola, Wouter, Youp </h1>";
        const q = document.createElement('img');
        q.id = `img`;
        q.src = 'https://i.imgur.com/nc3Zenr.jpeg';
        q.style = 'width: 50%'
        exerciseStatsDiv.appendChild(q); 
        exerciseStatsDiv.style.height = newHeight + 'px';
    }, 200);
    
}

function updateExerciseStats(jsonData, text,use_json) {
    const exerciseStatsDiv = document.getElementById('exercise-stats');

    // Create a temporary div to calculate the new height
    const tempDiv = document.createElement('div');
    tempDiv.style.position = 'absolute';
    tempDiv.style.visibility = 'hidden';
    tempDiv.style.height = 'auto';
    tempDiv.style.width = exerciseStatsDiv.clientWidth + 'px';

    // Append the content to the temporary div
    tempDiv.innerHTML = text;
    if (use_json){
        jsonData.array.forEach(item => {
            const p = document.createElement('p');
            p.id = `${item.type}`;
            p.textContent = `Score ${item.type}: ${item.count}`;
            tempDiv.appendChild(p);
        });
    }
    document.body.appendChild(tempDiv);

    // Get the calculated height
    const newHeight = tempDiv.clientHeight;
    document.body.removeChild(tempDiv);

    // Set the initial height to the current height
    exerciseStatsDiv.style.height = exerciseStatsDiv.clientHeight + 'px';

    // Force a reflow to apply the current height
    exerciseStatsDiv.offsetHeight;

    // Update the content
    exerciseStatsDiv.innerHTML = text;
    if (use_json){
        jsonData.array.forEach(item => {
            const p = document.createElement('p');
            p.id = `type-${item.type}`;
            p.textContent = `Score ${item.type}: ${item.count}`;
            exerciseStatsDiv.appendChild(p);
        });
    }
    // Animate to the new height
    exerciseStatsDiv.style.height = newHeight + 'px';
}

