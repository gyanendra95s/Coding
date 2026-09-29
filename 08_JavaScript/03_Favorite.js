const favMovie="Avatar";

let guess=prompt("guess my favorite movie");

while(guess!=favMovie && guess!="quit"){
    guess=prompt("Wrong Movie.Please try again!");
}

if(guess==favMovie){
    console.log("Congrats");
}