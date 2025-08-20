#include <stdio.h>

int main() {

    float angle;
    scanf("%f", &angle);

    if (angle < 360) {
        if (angle < 90) {
            if (angle <= 45) {
                printf("Sharp acute");
            }
            else {
                printf("acute angle");
            } 
        }
        else if (angle == 90) {
            printf("Right");
        }
        else if (angle > 90 && angle <= 180) {
            printf("Obtuse");
        }
        else if (angle > 180) {
            printf("Reflex");
        }
    }
    else {
        printf("Invalid");
    }

	return 0;

}