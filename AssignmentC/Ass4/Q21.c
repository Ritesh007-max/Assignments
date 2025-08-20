#include <stdio.h>
#include <math.h>

int main() {

    int a, b, c;
    scanf("%d %d %d" , &a, &b, &c);

    float disc = b*b - 4*a*c;
    float root1 = (b + sqrt(b*b - 4*a*c)) / 2*a;
    float root2 = (-b - sqrt(b*b - 4*a*c)) / 2*a;

    if (disc >= 0) {

        if (root1 > 0 && root2 > 0) {
            printf("real & +ve");
        }
        else if ((root1 > 0 && root2 < 0) || (root1 < 0 && root2 > 0)) {
            printf("Mixed");
        }
        else if (root1 < 0 && root2 < 0) {
            printf("Negative Roots");
        }      
    }
    else {
        printf("Imaginary");
    }
    

	return 0;

}