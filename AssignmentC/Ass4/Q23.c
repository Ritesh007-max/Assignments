#include <stdio.h>

int main() {

    float day1, day2, day3, day4, day5; 
    scanf("%f %f %f %f %f", &day1, &day2, &day3, &day4, &day5);

    float median = day3;
    if (median > 0) {
        
        if (median > 30) {
            printf("Hot Week");
        }
        else if (median > 20 && median <= 30)
        {
            printf("Mild");
        }
        else if (median <= 20)
        {
            printf("Cold");
        }
    }
    else
    {
        printf("Freezing Alert");
    }
        
	return 0;

}

// Not Taught Done wrong
