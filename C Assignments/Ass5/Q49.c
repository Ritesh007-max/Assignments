#include <stdio.h>

int main() {

    int n;
    int count = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            printf(" %c", count + 64);
            count++;
        }
        printf("\n");
    }

	return 0;

}