// Revrse the string using java Script 

const str = "Hello World";
 let len = str.length;

 let arr = str.split("");

 for( let i = 0; i <=len/2; i++) {
          let temp = arr[len -1-i];
          arr[i] = arr[len-1-i];
          arr[len-1-i] = temp;


 }
 str =arr.join("");
 console.log(str);

 
  // Print the Reverse String using JavaScript

  let str ="Akshat Parmar";
  let len = str.length;

  let arr = str.split("");

  for( let i =0; i <= len/2; i++) {
        let temp = arr[len -1-i] ;
        arr[len -1-i] = arr[i];
        arr[i] = temp;


  }
  str =arr.join("");
  console.log(str);






  // Reverse the string by using java Script

  let str = "My name is Akshat Parmar. ";
  let len = str.length;


  let arr = str.split("");

  for( int i =0; i <= len/2; i++) {

       let temp =arr[len-1-i];
       arr[len-1-i] = arr[i];
       arr[i] = temp;


  }
  str = arr.join("");
  console.log(str);