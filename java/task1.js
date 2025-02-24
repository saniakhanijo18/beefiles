let timeLeft = 60; 


const timerDisplay = document.getElementById("timer");


function updateTimer() {
   
    let minutes = Math.floor(timeLeft / 60);
    let seconds = timeLeft % 60;

    
    seconds = seconds < 10 ? '0' + seconds : seconds;

    
    timerDisplay.textContent = ${minutes} : ${seconds};

   
    if (timeLeft > 0) {
        timeLeft--;
    } else {
        
        clearInterval(timerInterval);  
        alert("Exam finished!");
        console.log(items);
        items.fortach (value)
        value.style.display="none";
        
    }
}

const timerInterval = setInterval(updateTimer, 1000);