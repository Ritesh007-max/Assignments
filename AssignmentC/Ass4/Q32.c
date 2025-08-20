#include <stdio.h>
#include <math.h>

int main() {

    float x1, x2, y1, y2;
    scanf("%f %f %f %f", &x1, &x2, &y1, &y2);

    float sloap = (x2 - x1) / (y2 - y1);

    if (x2 - x1 == 0) {
        printf("Vertical");
    }
    else if (y2 - y1 == 0) {
        printf("Horizontal");
    }
    else if (sloap > 0) {
        printf("Rising");
    }
    else if (sloap < 0) {
        printf("Falling");
    }
    else if (abs(sloap) > 1) {
        printf("Steep");
    }

	return 0;

}