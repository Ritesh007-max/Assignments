#include <stdio.h>

int main() {

    int n, r;
   scanf("%d %d", &n, &r);

    int resultn = 1;
    for (int a = 1; a <= n; a++){
        resultn = resultn*a;
    }

    int resultr = 1;
    for (int a = 1; a <= r; a++){
        resultr = resultr*a;
    }

    int resultnr = 1;
    for (int a = 1; a <= (n - r); a++){
        resultnr = resultnr*a;
    }

    int res = resultnr*resultr;

    int result = resultn / res;

    printf("%d", result);

	return 0;

}