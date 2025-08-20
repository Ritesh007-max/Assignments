#include <stdio.h>

int main() {

    float change;
    float price;
    scanf("%f %f", &change, &price);

    float percent = (change*100) / price;
    if (percent > 0.0){

        if (percent > 5) {
            printf("Strong Gain");
        }
        else if (percent > 0 && percent <= 5) {
            printf("Mild Gain");
        }
        else if (percent < 0 && percent >= 5) {
            printf("Mild Loss");
        }
        else if (percent < -5) {
            printf("Strong Loss");
        }
        else {
            printf("Stabilized up");
        }

    }
    else if (percent < 0.0)
    {
        printf("Stabilized down");
    }
    else {
        printf("Totally stable");
    }
    
	return 0;

}