const arrayInput = document.getElementById("array");
const submitArrayBtn = document.getElementById("submit-array");
const visualizeBtn = document.getElementById("visualize-btn");
const inputForm = document.querySelector(".input-form");
const visualizationDiv = document.querySelector(".visualization-div");

let maxElementVal = 0;
let intArray = [];

submitArrayBtn.addEventListener("click", () => {
    submitArray();
});

visualizeBtn.addEventListener("click", () => {
    bubbleSort();
});

const submitArray = () => {
    const stringArray = arrayInput.value;
    intArray = stringArray.split(",").map(Number);

    maxElementVal = Math.max(...intArray);

    visualizeBtn.disabled = false;
    visualizeArray();
};

const visualizeArray = () => {
    visualizationDiv.innerHTML = ""; // Clear previous visualization

    intArray.forEach((element, index) => {
        const arrayElementBar = document.createElement("div");
        arrayElementBar.classList.add("array-element");
        arrayElementBar.style.height = `${(element / maxElementVal) * 80}vh`;
        arrayElementBar.style.width = `${85 / intArray.length}vh`;
        arrayElementBar.style.left = `${(95 / intArray.length) * index}vh`;
        arrayElementBar.style.top = `${80 - ((element / maxElementVal) * 80)}vh`;

        visualizationDiv.appendChild(arrayElementBar);
    });
};

const swapElements = (index1, index2) => {
    const temp = intArray[index1];
    intArray[index1] = intArray[index2];
    intArray[index2] = temp;

    // Swap bars visually with a delay
    const bars = document.querySelectorAll(".array-element");
    const bar1 = bars[index1];
    const bar2 = bars[index2];

    bar1.classList.add("swapping");
    bar2.classList.add("swapping");

    // Apply green color to swapping bars
    bar1.style.backgroundColor = "#4CAF50";
    bar2.style.backgroundColor = "#4CAF50";

    const tempLeft = bar1.style.left;
    bar1.style.left = bar2.style.left;
    bar2.style.left = tempLeft;

    // Remove swapping class and revert color after a short delay
    setTimeout(() => {
        bar1.classList.remove("swapping");
        bar2.classList.remove("swapping");
        // Revert to original color
        bar1.style.backgroundColor = "";
        bar2.style.backgroundColor = "";
    }, 1000); // Adjust the delay as needed
};


const bubbleSort = () => {
    const n = intArray.length;
    let i = 0;
    let j = 0;

    const sortStep = () => {
        if (i < n - 1) {
            if (j < n - i - 1) {
                if (intArray[j] > intArray[j + 1]) {
                    swapElements(j, j + 1);
                }
                j++;
            } else {
                i++;
                j = 0;
            }
            setTimeout(() => {
                visualizeArray();
            }, 100); // Adjust the delay as needed
            setTimeout(sortStep, 100); // Adjust the delay as needed
        }
    };

    sortStep();
};

