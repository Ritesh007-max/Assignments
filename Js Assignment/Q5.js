const num1 = 0;
const num2 = 6;
const num3 = 9;

if (num1 > num2 & num1 > num3 & num2 > num3) {
    console.log("num1 is largest");
}
else if (num2 > num1 & num2 > num3) {
    console.log("num2 is the largest");
}
else if (num3 > num1 & num3 > num2) {
    console.log("num3 is the largest");
}