#include <stdio.h>

int main() {
    int num = 15;
    int isPrime = 0;

    for (int i = 0; i <= num; i++) {

        if (i < 2) continue;  

        isPrime = 1; 

        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime == 1) printf("%d ", i);
    }

    return 0;
}
