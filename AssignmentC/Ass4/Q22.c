#include <stdio.h>

int main() {

    char c;
    scanf("%c", &c);


    if (c == '0' || c == '1' || c == '2' || c == '3' || c == '4' || c == '5'|| c == '6' || c == '7' || c == '8' || c == '9') {

        if (c == '2' || c == '3' || c == '5'|| c == '7') {
            printf("Prime Digit");
        }
        else if ( c == '4'|| c == '6'|| c == '8') {
            printf("Even Non-prime Digit");
        }
        else {
            printf("Odd Non-Prime");
        }
    }
    else {
        printf("Invalid Char");
    }
    
    
    return 0;

}