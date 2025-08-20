#include <stdio.h>

int main() {

    int R, G, B;

    scanf("%d %d %d", &R, &G, &B);

    if (R == G && G == B && R == B) {
        printf("One of 50 Shades of Grey");
    }
    else {
        if (R > G && R > B) {
            printf("Warm");
        }
        else if (B > R && B > G) {
            printf("cool");
        }
        else {
            printf("Neutral");
        }
    }

	return 0;

}