#include <stdio.h>

int main(){
    
    int pH;

    scanf("%d", &pH);

    if (pH >= 0 && pH <= 14) {
        if(pH >= 0 && pH < 7){
            printf("acidic");
        }
        else if (pH > 7 && pH <= 10)
        {
            printf("basic");
        }
        else if (pH > 10 & pH <= 14)
        {
            printf("Strongly Basic");
        }
        else if (pH == 7)
        {
            printf("Nuteral");
        }
    }
    else {
        printf("Invalid pH value");
    }

    return 0;
}