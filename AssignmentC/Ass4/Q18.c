#include <stdio.h>

int main() {

    int num1, num2, num3, num4;
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

    if (num1 + num2 == num3 + num4 || num4 + num2 == num3 + num1 || num3 + num2 == num4 + num1) {
        printf ("Balanced");
    }
    else {
        printf("Unbalanced");
    }


	return 0;
    // do again
}