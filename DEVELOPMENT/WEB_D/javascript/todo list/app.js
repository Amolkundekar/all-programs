let btn = document.querySelector('button');
let ul = document.querySelector('ul');
let inp = document.querySelector('input');

btn.addEventListener("click", function(){
    let item = document.createElement("li");
    item.innerText = inp.value;

    let del = document.createElement("button");
    del.innerText ="delete";
    del.classList.add("delete");
    item.appendChild(del)
    ul.appendChild(item);


    // console.log(inp.value);
    inp.value = "";

});

ul.addEventListener("click", function(event){
    if(event.target.nodeName == "BUTTON"){
        let ListItem = event.target.parentElement;
        console.log(ListItem);
        ListItem.remove();
        console.log("delete");
    }
    // console.log("button clicked");
})

// let delbtns = document.querySelectorAll(".del");
// for(delbtn of delbtns){
//     delbtn.addEventListener("click", function(){
//         // console.log("element deleted");
//         let par = this.parentElement;
//         par.remove();
//     })
// }

