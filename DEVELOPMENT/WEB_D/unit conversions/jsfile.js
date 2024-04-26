
let curr_val;

// ============== meter to centimeter ===============

const input_meter = document.querySelector('input[name="minput"]');
console.log(input_meter);

const msubmit = document.querySelector('input[name="msubmit"]');
console.log(msubmit);

const mtocm_p = document.getElementById("mtocm_p");
console.log(mtocm_p);

msubmit.addEventListener("click", (e)=>{
    e.preventDefault();
    curr_val = input_meter.value;
    // console.log(curr_val);
    curr_val = +curr_val;

    mtocm_p.innerText = 100*curr_val;

});



// ====================== centimeter to meter =================

const input_centi_meter = document.querySelector('input[name="cminput"]');

const cmsubmit = document.querySelector('input[name="cmsubmit"]');

const cmtom_p = document.getElementById("cmtom_p");

cmsubmit.addEventListener("click", (e)=>{
    e.preventDefault();
    curr_val = input_centi_meter.value;
    // console.log(curr_val);
    curr_val = +curr_val;

    cmtom_p.innerText = curr_val/100;

});


