#include <stdio.h>
#include <math.h>

int main() {

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n; j++) {

            int top = i - 1;
            int left = j - 1;
            int right = n - j;
            int bottom = n - i;
        }
        printf("\n");
    }


    return 0;
}

// fmin(x,y) can be used to find the min number btw 2 chain these to find the min btw 4