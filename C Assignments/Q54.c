#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {

        for (int k = 1; k <= n - i; k++) {
            printf(" ");
        }
        
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
    for (int i = 1; i <= n; i++) {

        for (int k = 0; k < i; k++) {
            printf(" ");
        }
        for (int j = 0; j <= 2*(n - i); j++) {
            
            if (j == 2*(n - i)|| j == 0) {
                printf("*");
            }
            else {
                printf(" ");
            }

        }
        printf("\n");
    }

	return 0;

}