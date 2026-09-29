let pencilPrice=10;
let erasorPrice=5;

// Normally we write
// let output="The total price is:"+(pencilPrice+erasorPrice)+"Rupees.";
let output=`The total price is: ${pencilPrice+erasorPrice} Rupees.`
console.log(output)

let a=10;
console.log(a++);
console.log(++a);

let age=25;

if(age>18){
    console.log("Eligible to Vote");
}

// Alert
alert("This is wrong window!");

console.log("Hello");
console.warn("Tis is a warning!");
console.error("This is an error");


// Prompt
let firstName=prompt("Enter First Name");
let lastName=prompt("Enter last name");
let msg="Welcome"+(firstName+lastName)+"!";
alert(msg);