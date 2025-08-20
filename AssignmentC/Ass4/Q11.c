#include <stdio.h>


int main() {
    
    int num1, num2, num3;
    scanf("%d %d %d" , &num1, &num2, &num3);

    if (num2*2 == num1 + num3) {
        if (num2 - num1 > 10) {
            printf("Large Gap");
        }
        else if (num2 - num1 == 0) {
            printf("Constant");
        }
        else {
            printf("Small Gap");
        }
    }
    else {
        printf("Irregular");
    }
    
    return 0;
}