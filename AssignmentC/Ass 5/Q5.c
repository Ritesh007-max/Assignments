#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);

    for (int a = 1; a <= 10; a++) {
        printf("%d\n", num*a);
    }

	return 0;

}