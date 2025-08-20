#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5;

    scanf("%d %d %d %d %d", &sub1, &sub2, &sub3, &sub4, &sub5);

    float avg = (sub1 + sub2 + sub3 + sub4 + sub5) / 5;

    if (avg >= 90) {
        printf("Outstanding");
    }
    else if (avg >= 70 && sub1 > 50 && sub2 > 50 && sub3 > 50 && sub4 > 50 && sub5 > 50 ) {
        printf("Consistent");
    }
    else if (avg >= 50) {
        printf("Passable");
    }
    else {
        printf("Needs Improvement");
    }
    

}