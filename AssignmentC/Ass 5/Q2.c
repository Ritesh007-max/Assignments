#include <stdio.h>

int main() {

    for (int a = 2; a <= 20; a++) {
        
        if (a % 2 == 0) {
            printf("%d", a);
        }
    }
    
    return 0;

}