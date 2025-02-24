let timeLeft = 60; 

// Select the timer display element
const timerDisplay = document.getElementById("timer");

// Function to update the timer
function updateTimer() {
    // Calculate minutes and seconds
    let minutes = Math.floor(timeLeft / 60);
    let seconds = timeLeft % 60;

    // Ensure two digits for seconds
    seconds = seconds < 10 ? '0' + seconds : seconds;

    // Display the updated time
    timerDisplay.textContent = ${minutes}:${seconds};

    // Check if time has run out
    if (timeLeft > 0) {
        timeLeft--;
    } else {
        // Trigger alert when time finishes
        clearInterval(timerInterval);  // Stop the timer
        alert("Exam finished!");
    }
}

// Start the timer to update every second
const timerInterval = setInterval(updateTimer, 1000);