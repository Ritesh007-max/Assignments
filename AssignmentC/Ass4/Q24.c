#include <stdio.h>

int main() {

    int numi, deno;
    scanf("%d %d", &numi, &deno);
    float result = numi / deno;

    if (deno > 0) {
        if (result > 1) {
            if (numi % deno == 0 ) {
                printf("Improper Whole");
            }
            else {
                printf("Improper Fraction");
            }
        }
        else if (result == 1) {
            printf("Equal");
        }
        else if (result < 1)
        {
            printf("Proper");
        }
        

    }
    else {
        printf("Invalid Input");
    }

	return 0;

}