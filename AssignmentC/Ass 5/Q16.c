#include <stdio.h>

int main() {

    int a = 1;
    int result = 0;

    while (a <= 50) {
        result = result + a;      
        a++;
    }
    printf("%d\n", result);

	return 0;

}