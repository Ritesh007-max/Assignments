#include <stdio.h>

int main() {


    int fact;
    int result = 1;

    scanf("%d", &fact);

    for(int a = fact; a > 0; a = a - 1) {
        result = result*a;
    }

    printf("%d", result);

	return 0;

}