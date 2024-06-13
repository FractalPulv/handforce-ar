// scripts.js
document.addEventListener('DOMContentLoaded', () => {
    // WebSocket client
    var URL = window.location.hostname + ":";
    var WebSocketType = "ws";

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
        socket.onmessage = function(event) {
            console.log('Received WebSocket message:', event.data);
            var data = JSON.parse(event.data);
            document.getElementById("exercise-stats").append = "Score " + data.type + ": " + data.count;
        };

        socket.onopen = function(event) {
            console.log("WebSocket connection established");
            
            chatBtn.style.backgroundColor = 'green';
        };

        socket.onclose = function(event) {
            console.log("WebSocket connection closed");
            chatBtn.style.backgroundColor = 'red';
        };

        socket.onerror = function(error) {
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
            ws.send(JSON.stringify({ type: 'userChange', user: selectedUser }));
        });
    });

    manualDiffInput.addEventListener('input', (event) => {
        const manualDiff = event.target.value;
        console.log(`Manual difficulty changed to: ${manualDiff}`);
        ws.send(JSON.stringify({ type: 'manualDifficultyChange', difficulty: manualDiff }));
    });


    exercises.forEach(exercise => {
        exercise.addEventListener('click', () => {
            const exerciseId = exercise.id.split('-')[1];
            selectedExercise = exerciseId;
            exercises.forEach(ex => ex.classList.remove('active'));
            exercise.classList.add('active');
            console.log(`Exercise ${exerciseId} selected.`);
            if (exerciseId == 1){
                load_cup();
            }
            else if (exerciseId == 2){
                load_poses();
            }
            ws.send(JSON.stringify({ type: 'exerciseChange', exercise: exerciseId }));
        });
    });

    // // WebSocket message handling
    // ws.onmessage = (message) => {
    //     const data = JSON.parse(message.data);
    //     console.log("WebSocket message received:", data);
    //     if (data.type === 'statsUpdate') {
    //         updateSpiderGraph(data.stats);
    //     }
    // };

    function load_poses() {
        const exerciseStatsDiv = document.getElementById('exercise-stats');
        fetch('/pose-content')
        .then(response => response.json())
        .then(data => {
            // //var data = JSON.parse(data);
            // console.log(data);
            // data.array.forEach(item => {
            //     console.log(item);
            //     const p = document.createElement('p');
        
            //     // Set the content of the paragraph to the desired format
            //     p.textContent = `score ${item.type}: ${item.count}`;
                
            //     // Append the paragraph to the exercise-stats div
            //     exerciseStatsDiv.appendChild(p);
            // })
            // console.log(data);
            updateExerciseStats(data,'<h1> Stats for pose exercise</h1>');
        })
        .catch(error => {
            console.error('Error:', error);
        });
    }

    function load_cup() {
        const exerciseStatsDiv = document.getElementById('exercise-stats');
        fetch('/cup-content')
        .then(response => response.json())
        .then(data => {
            //var data = JSON.parse(data);
            console.log(data);
            // data.array.forEach(item => {
            //     console.log(item);
            //     const p = document.createElement('p');
        
            //     // Set the content of the paragraph to the desired format
            //     p.textContent = `score ${item.type}: ${item.count}`;
                
            //     // Append the paragraph to the exercise-stats div
            //     exerciseStatsDiv.appendChild(p);
            // })
            // console.log(data);
            updateExerciseStats(data,'<h1> Stats for cup exercise</h1>');
        })
        .catch(error => {
            console.error('Error:', error);
        });
    }
});

function updateExerciseStats(jsonData, text) {
    const exerciseStatsDiv = document.getElementById('exercise-stats');

    // Create a temporary div to calculate the new height
    const tempDiv = document.createElement('div');
    tempDiv.style.position = 'absolute';
    tempDiv.style.visibility = 'hidden';
    tempDiv.style.height = 'auto';
    tempDiv.style.width = exerciseStatsDiv.clientWidth + 'px';
    
    // Append the content to the temporary div
    tempDiv.innerHTML = text;
    jsonData.array.forEach(item => {
        const p = document.createElement('p');
        p.textContent = `score ${item.type}: ${item.count}`;
        tempDiv.appendChild(p);
    });
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
    jsonData.array.forEach(item => {
        const p = document.createElement('p');
        p.textContent = `score ${item.type}: ${item.count}`;
        exerciseStatsDiv.appendChild(p);
    });

    // Animate to the new height
    exerciseStatsDiv.style.height = newHeight + 'px';
}

