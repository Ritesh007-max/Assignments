#include <stdio.h>

int main() {

	int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        int count = 0;

        for (int j = 1; j <= n; j++) {

            if (j >= i) {
            printf("%d", ++count);
            }
            else {
                printf(" ");
            }

        }

    printf("\n");
    }
    
    return 0;

}