const salary = 2506851;

if (salary <= 250000) {
    console.log("No Tax");
}
else if (salary > 250000 & salary <= 500000) {
    console.log("5% tax");
}
else if (salary > 500000 & salary <= 1000000) {
    console.log("20% tax");
}
else if (salary > 1000000) {
    console.log("30% tax");
}