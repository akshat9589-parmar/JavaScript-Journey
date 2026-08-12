// Count the number of vowels in String using JavaScript

let str = "Apple";



let legth = str.length;
let count = 0;

for( let i =0; i <= legth; i++) {
    if(
        str[i] == a; ||
        str[i] == e; ||
        str[i] == i; ||
        str[i] == o; ||
        str[i] == u;

    )
    count++;
}
console.log("The number of vowels in string are: " +count);






// Count the number of String contain the words A,K,S,H,A,T

let a = (prompt("Enter the String:"));

console.log(a);
let length =a.length;
let count = 0;

for( let i = 0; i < length; i++) {         // Isme <= isliye nahi aaya kyoki loop ko ek phele tak run kerna hai
    if(  
        a[i] == 'A' ||
        a[i] == 'K' ||
        a[i] == 'S' ||
        a[i] == 'H' ||
        a[i] == 'A' ||
        a[i] == 'T' 

    )
    count++;

}
console.log("Number of Words in the given Strings are:" +count );