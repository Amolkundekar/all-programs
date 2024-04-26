let form = document.querySelector("form");

form.addEventListener("submit", function (event) {
    // alert("form submitted");
    // console.log("form submitted");
    event.preventDefault();


    // user = document.querySelector("#user");
    // pass = document.querySelector("#pass");
    
    // both the lines (above and below gives same output)

    user = this.elements[0];
    pass = this.elements[1];;

    console.log("username = ", user.value);
    console.log("password = ", pass.value);

    alert(`Hii ${user.value} your password is set to ${pass.value}`);

})