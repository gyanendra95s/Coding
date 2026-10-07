// Set TimeOut
console.log("Hi");

setTimeout(()=>{
    console.log("AC");
},5000);

console.log("WC");


// Set Interval

let id=setInterval(()=>{
    console.log("AC");
},2000); 

console.log(id);

// To stop the setInterval
clearInterval(id);