#include <stdio.h>

int main() {

	int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= n - i + 1; k++) {
            printf("%c", k + 64);
        }
    printf("\n");
    }
    
    return 0;

}