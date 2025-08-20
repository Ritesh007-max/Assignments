#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    int digi1 = num / 100;
    int digi2 = (num / 10) % 10;
    int digi3 = num % 10; 

    int sum = digi1 + digi2 + digi3;
    int product = digi1*digi2*digi3;

    if (digi1 != 0 && digi2 != 0 && digi3 != 0 ){
        if (sum / product) {
            printf("divisible");
        }
        else {
            printf("Not divisible");
        }
    }
    else {
        printf("There is a zero in the num");
    }

	return 0;

}