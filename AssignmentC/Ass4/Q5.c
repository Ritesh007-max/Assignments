#include <stdio.h>
#include <math.h>

int main(){
    float x ,y;

    scanf("%f %f", &x, &y);
    float dist = pow((x*x) + (y*y), 0.5);

    if (dist <= 5){
        printf("close");
    }
    else if (dist > 5 && dist < 15) {
        printf("Medium");
    }
    else {
        printf("Far");
    }
}