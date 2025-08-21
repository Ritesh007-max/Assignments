#include <stdio.h>
#include <math.h>

int main() {

    float a, b, c, d;
    scanf("%f %f %f %f", &a, &b, &c, &d);
    float disc = (pow(b, 2) - 4*a*(c - d)) / a;
    float root1 = -b + sqrt(disc) / 2;
    float root2 = -b - sqrt(disc) / 2;
    
    if (a > 0) {
        if (disc >=0 && a > 0) {

            if (root1 > 0 && root2 > 0) {
                printf("Both roots are +ve");
            }
            else if (root1 > 0 && root2 < 0) {
                printf("one +ve one -ve");
            }
            else if (root1 < 0 && root2 < 0)
            {
                printf("both -ve");
            }  
        }
    }
    else if (a == 0)
    {
        printf("linear eqn");
    }
    else if (disc < 0){
        printf("Immaginary");
    }

	return 0;

}