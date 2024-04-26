let gameSeq = [];
let userSeq = [];
let buttons = ["red", "yellow", "green", "purple"];
let start = false;
let level = 0;

let h2 = document.querySelector("h2");

// Start the game on keypress
document.addEventListener("keypress", function () {
    if (!start) {
        start = true;
        levelup();
    }
});

// Function to flash the game button
function gameFlash(btn) {
    btn.classList.add("flash");
    setTimeout(function () {
        btn.classList.remove("flash");
    }, 300);
}

// Function to flash the user button
function userFlash(btn) {
    btn.classList.add("userflash");
    setTimeout(function () {
        btn.classList.remove("userflash");
    }, 300);
}

// Function to increase the level
function levelup() {
    userSeq = [];
    level++;
    h2.innerText = `level ${level}`;

    let randIdx = Math.floor(Math.random() * buttons.length);
    let randClr = buttons[randIdx];
    let randBtn = document.querySelector(`.${randClr}`);
    gameSeq.push(randClr);
    gameFlash(randBtn);
}

// Function to check user input
function check(index) {
    if (userSeq[index] == gameSeq[index]) {
        if (userSeq.length == gameSeq.length) {
            setTimeout(levelup, 1000); // Fix the setTimeout call
        }
    } else {
        h2.innerHTML = `Game Over !!!<br> Your Score is <b>${level - 1}</b><br> Press any key to start`;
        // setTimeout(changebg, 150);
        reset();
    }
}

// Function to handle button press by the user
function btnPress() {
    let btn = this;
    userFlash(btn);
    let userColor = btn.getAttribute("id");
    userSeq.push(userColor);
    check(userSeq.length - 1);
}

// Add click event listeners to buttons
let allBtns = document.querySelectorAll(".btn");
allBtns.forEach(btn => {
    btn.addEventListener("click", btnPress);
});

// Function to reset the game
function reset() {
    start = false;
    gameSeq = [];
    userSeq = [];
    level = 0;

}
