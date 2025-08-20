#include <stdio.h>
#include <math.h>

int main() {

    float v, a;
    scanf("%f %f", &v, &a);

    if (v / a < 10) {
        printf("Quick Stop");
    }
    else if (v / a >= 10 && v / a < 30) {
        printf("Moderate");
    }
    else if (v / a > 30) {
        printf("Slow");
    }
    else if (a <= 0 ) {
        printf("Invalid");
    }

    

	return 0;

}