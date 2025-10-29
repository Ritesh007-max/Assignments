#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int count = n*(n+1) / 2;

    for (int i = 1; i <= n; i++)
    {

        for (int j = i; j >= 1; j--)
        {
            printf(" %d", count);
            count--;
        }

        printf("\n");
    }
 
	return 0;

}


