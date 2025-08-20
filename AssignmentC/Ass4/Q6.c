#include <stdio.h>

int main(){
    
    float side1, side2, dia;

    scanf("%f %f %f", &side1, &side2, &dia);



    if (side1*side1 + side2*side2 == dia*dia) {
        if (side1 != side2) {
            printf("rectangle");
        }
        else {
            printf("Square");
        }
    }
    else {
        printf("Inavlid");
    }

    
    
    return 0;
}