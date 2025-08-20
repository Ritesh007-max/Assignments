#include <stdio.h>
#include <math.h>

int main() {

    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);

    float dist = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));

    if (dist == 0) {
        printf("Origin");
    }
    else if (dist < 1) {
        printf("Very Close");
    }
    else if (dist >= 1 && dist <= 10) {
        printf("Near");
    }
    else if (dist > 10 && x > 0 && y > 0 && z > 0) {
        printf("Same Octant Far");
    }
    else {
        printf("Different Octant");
    }
    

	return 0;

}