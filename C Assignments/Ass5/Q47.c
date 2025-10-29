#include <stdio.h>

int main() {

    int n;
    int count = 2;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf(" %d", count);
            count = count + 2;
        }

        printf("\n");
    }

	return 0;

}