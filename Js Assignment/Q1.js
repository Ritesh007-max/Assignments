const sub1 = 50;
const sub2 = 80;
const sub3 = 80;
const sub4 = 50;
const sub5 = 50;

const per = ((sub1 + sub2 + sub3 + sub4 + sub5) / 500)*100;

if (per > 90) {
    console.log("GradeA");
}
else if (per >= 80 & per < 90) {
    console.log("GradeB");    
} 
else if (per >= 70 & per < 80) {
    console.log("GradeC");    
}
else if (per >= 60 & per < 70) {
    console.log("GradeD");    
}
else if (per < 60) {
    console.log("Fail");    
}
