#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int r = 1; r <= n; r++) {

        for (int c = 1; c <= n; c++) {

            if (c == (n + 1) / 2 || r == (n + 1) / 2) {
                printf("*");
            }
            else {
                printf (" ");
            }

        }
        printf("\n");
    }

	return 0;

}