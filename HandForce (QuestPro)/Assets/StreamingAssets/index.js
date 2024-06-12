// scripts.js
document.addEventListener('DOMContentLoaded', () => {
    const ws = new WebSocket('ws://your_websocket_server');
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
            ws.send(JSON.stringify({ type: 'exerciseChange', exercise: exerciseId }));
        });
    });

    // WebSocket message handling
    ws.onmessage = (message) => {
        const data = JSON.parse(message.data);
        console.log("WebSocket message received:", data);
        if (data.type === 'statsUpdate') {
            updateSpiderGraph(data.stats);
        }
    };
});

2