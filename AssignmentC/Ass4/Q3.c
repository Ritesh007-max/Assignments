#include <stdio.h>

int main(){

    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num2 > num1 && num2 > num3 && num4 > num2 || num2 > num4 && num2 > num3 && num1 > num2 || num2 > num1 && num2 > num4 && num3 > num2) 
    {
        printf("num2");
    }
    else if (num1 > num2 && num1 > num3 && num4 > num1 || num1 > num4 && num1 > num3 && num2 > num1 || num1 > num4 && num1 > num2 && num3 > num1) 
    {
        printf("num1");
    }
    else if (num3 > num1 && num3 > num2 && num4 > num3 || num3 > num4 && num3 > num2 && num1 > num3 || num3 > num1 && num3 > num4 && num2 > num3)
    {
        printf("num3");
    }
    else 
    {
        printf("num4");
    }
    
    

    return 0;
}