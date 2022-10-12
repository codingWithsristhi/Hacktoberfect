//== and ===
//== checks only value.It does not check datatype. but === checks values as well as datatypes.
let firstVar=7;
let secondVar='7';
console.log(firstVar==secondVar);//True
console.log(firstVar===secondVar);//False
let thirdVar=7;
console.log(firstVar===thirdVar);//True
//!= and !==
//It is same like above operators.In case of !=,When both variables is having different values then it returns true else false. It doesn't matter whether they are having same datatype or not.
//but in the case of !== operator . It checks both datatype and values as well . If both are not equal then return true otherwise false.
let fourthVar=7;
let fifthVar='7';
console.log(fourthVar!=fifthVar);
let sixthVar=8;
console.log(fourthVar!==sixthVar);
console.log(fourthVar!==fifthVar);
//There are some truthy as well as some falsy values.
//"",null , undefined these are falsy values.

// Ternary Operator
let age=18;
let result=(age>=18)?true:false;
if(result)
    console.log("Can vote");
else
    console.log("Can not vote");

//Spread Operator
//In javascript there is a special type of operator name is spread operator which is used to clome arrays destruct arrays.
//represented by ...
let arr=[1,2,3];
let arr1=[...arr];
console.log(arr,arr1);
