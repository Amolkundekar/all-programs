const clk =  document.getElementsById('clock');

setInterval(()=>{
    const date = new Date();
    clk.innerHTML = date();
},1000)