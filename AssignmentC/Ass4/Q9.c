#include <stdio.h>
#include <math.h>

int main(){
    
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int final = pow(num1, num2);

    if (final >= 1000 && final <= 10000 ) {
        if (final % 2 == 0) {
            printf("Yes");
        }
        else {
            printf("No");
        }
    }
    else {
        printf("Invalid");
    }

    return 0;
}