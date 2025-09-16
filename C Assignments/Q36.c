#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {
            printf("%c", k + 'A' - 1);
        }
        printf("\n");
    }

	return 0;

}