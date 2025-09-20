#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            if (i == 1 || j == 1) {
                printf("1");
            }
            else if (i == 2 || j == 2) {
                printf("2");
            }
            else if (i == 3 || j == 3) {
                printf("3");
            }
        }
        printf("\n");
    }

    return 0;
}

// Not done