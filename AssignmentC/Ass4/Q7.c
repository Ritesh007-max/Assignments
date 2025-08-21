#include <stdio.h>
#include <math.h>

int main() {

    int num;
    scanf("%d", &num);
    int sum = 0;

    for(int div = 1; div <= sqrt(num); div++){
        if (num % div == 0) {
            sum = sum + div;
        }
    }

    printf("%d", sum);

	return 0;

}