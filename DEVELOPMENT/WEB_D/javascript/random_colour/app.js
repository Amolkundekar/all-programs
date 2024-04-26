let btn = document.querySelector('button');


btn.addEventListener('click', function (){
    // console.log("generate random colour");
    let h3 = document.querySelector('h3');
    let randomColour = getrandomColour();
    h3.innerText= randomColour;
    console.log("colour updated");

    let div = document.querySelector('div');
    div.style.backgroundColor = randomColour;

})

function getrandomColour(){
    let r = Math.floor(Math.random()*255);
    let g = Math.floor(Math.random()*255);
    let b = Math.floor(Math.random()*255);

    let clr = `rgb(${r}, ${g}, ${b})`;

    return clr;
}