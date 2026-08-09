// Check wheater the year is Leap or not

let n = Number(prompt("Enter a Year:")); 
               // n = Year 

   if( (n % 400 == 0) || (n % 4==0) && (n % 100 !=0) ) {
    console.log("Leap Year");
   }           
   else{
    console.log("Not a Leap Year ");
   }

