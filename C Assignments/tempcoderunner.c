#include <stdio.h>

int main() {
    
    int n;
    scanf("%d", &n);
    printf("%d", n);

// Q1

    // for(int i = 1; i <= 2*n - 1; i++) {

    //     int count = 1;

    //     for (int j = 1; j <= 3*n - 2; j++) {

    //         if (i == n && j <= n || j >= 2*n - 1 && j <= 3*n - 2 && i == 1 || j >= 2*n - 1 && j <= 3*n - 2 && i ==  2*n - 1) {
    //             printf("%d", count++);
    //         }
    //         else if (i + j == 10 && j > n|| i == j && j > n) {
    //             printf("%d", i);
    //         }
    //         else {
    //             printf(" ");
    //         }

    //     }
    //     printf("\n");
    // }

// Q2

    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= 3*n + 3; j++) {

    //         if (i == j || i + j == 2*n || j - i == 2*n - 2 || i + j == 3*n + 3) {
    //             printf("%d", i);
    //         }
    //         else {  
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

// Q3

    // for (int i = 1; i <= 2*n - 1; i++) {

    //     for (int j = 1; j <= 3*n - 2; j++) {

    //         if (i + j == n + 1 || i > n && i - j == n - 1) {
    //             printf("%c", 64 + j);
    //         }
    //         else if (j - i == n + 3 && j >= 2*n - 1)
    //         {
    //             printf("%c", 64 + i);
    //         }
    //         else if (i + j == 4*n - 2 && i > n){
    //             printf("%c", 69 - (i - n));
    //         }
    //         else if (i == 1 && j > n && j < 2*n || i == 2*n - 1 && j > n && j < 2*n) {
    //             printf("%d", 69 + (n - j));
    //         }
    //         else {
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }

    return 0;
}