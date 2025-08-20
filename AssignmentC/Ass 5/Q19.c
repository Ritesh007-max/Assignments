#include <stdio.h>

int main() {

    int fact;
    int result = 1;

    scanf("%d", &fact);
    int a = 1;
    while ( a <= fact) {
        result = result*a;
        a++;
    }
    printf("%d\n", result);

	return 0;

}