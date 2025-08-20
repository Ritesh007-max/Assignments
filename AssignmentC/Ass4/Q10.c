#include <stdio.h>

int main() {

float unit;
scanf("%f", &unit);
float bill;

if (unit <= 100){
    bill = unit*5;
}
else if (unit > 100 && unit < 200) {
    bill = unit*7;
}
else if (unit > 200) {
    bill = unit*10;
}

printf("%f", bill);

if (bill > 500 && unit > 150) {
    printf("High Consumption");
}
else {
    printf("Normal");
}



return 0;
}