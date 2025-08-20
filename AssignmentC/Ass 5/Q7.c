#include <stdio.h>

int main() {

    int result = 0;

    for (int a = 1; a <= 50; a++) {

        result = result + a;
    }

    printf("%d", result);

	return 0;

}