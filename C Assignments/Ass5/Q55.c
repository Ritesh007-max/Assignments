#include <stdio.h>

int main () {

int n;
    scanf("%d", &n);

    for (int i = 1; i <= 2*n - 1; i++) {
        
        int count = 0;
        
        for (int j = 1; j <= 2*n - 1; j++) {
            
            if (i + j <= n || j - i >=n || i + j >= 3*n || i - j >= n) {
                printf(" ");

            }
            else {
                if (j <= n) {
                    printf("%d", ++count);
                }
                else {
                    printf("%d", --count);
                }
            }
        }
        printf("\n");
    } 


    return 0;
}