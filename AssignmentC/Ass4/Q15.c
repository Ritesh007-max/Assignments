#include <stdio.h>

int main() {
    
    float eff;
    int dist;
    scanf("%f %d", &eff, &dist);

    if (dist > 500 && eff < 10) {
        printf("Inefficient Long Trip");
    }
    else {
        printf("Efficient");
    }


    if (dist > 500 && eff > 50) {
       printf("Excessive");
    }
    else {
        printf("Moderate");
    }
    

    return 0;
}