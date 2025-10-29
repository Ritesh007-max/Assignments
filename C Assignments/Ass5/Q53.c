#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int count = 1; 
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < 2*n - 1; j++) {
            
            if (j + i >= n - 1 && j - i <= n - 1) {
                
                if (count < 10) {
                    printf("%d  ", count++);
                }
                else {
                    printf("%d ", count++);
                }

            } else {
                printf("   ");
            }
        }
        printf("\n");
    }
    
    return 0;
}