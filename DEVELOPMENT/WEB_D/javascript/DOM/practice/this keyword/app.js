function changecolor() {
    console.log(this.innerText);
    this.style.backgroundColor = "blue";
    
}

// use of this keyword

let para = document.querySelector('p');
let h1 = document.querySelector('h1');
let h3 = document.querySelector('h3');
let btn = document.querySelector('button');

para.addEventListener('click', changecolor);
h1.addEventListener('click', changecolor);
h3.addEventListener('click', changecolor);
btn.addEventListener('click', changecolor);

