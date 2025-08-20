#include <stdio.h>

int main(){
    
    int num1, num2, num3;

    scanf("%d %d %d" , &num1, &num2, &num3);

    int product = num1*num2*num3;

    if (product % 6 == 00 && product % 9 != 0){
        printf("Special");
    }
    else {
        printf("Normal");
    }

    return 0;
}