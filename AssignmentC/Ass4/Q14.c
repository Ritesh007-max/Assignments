#include <math.h>
#include <stdio.h>

int main() {

  

    // if (num2 > num1) {

    //     sub1 = num2 - num1;

    //         if (sub1 > num2) {
    //             sub2 = sub1 - num2;
    //         }
    //         else if (sub1 < num2) {
    //             sub2 = num2 - sub1;
    //         }
    //         else if (sub1 == num2) {
    //             printf("GCD is sub1/num2");
    //         }       
        
    // }
    // else if (num1 > num2) {
    //     sub1 = num1 - num2;

    //     if (sub1 > num1) {
    //             sub2 = sub1 - num2;
    //         }
    //         else if (sub1 < num1) {
    //             sub2 = num1 - sub1;
    //         }
    //         else if (sub1 == num1) {
    //             if (num1 == 1) {
    //                 printf("Coprime");
    //             }
    //             else if (num1 > 1 && num1 % 2 == 0) {
    //                 printf("Even Common");
    //             }
    //             else {
    //                 printf("Odd Commom");
    //             }
    //         }  
    // }
    // else if (num1 == num2)
    // {
    //     printf("GCD is num1/num2");
    // }
    



















    int num1, num2;
    scanf("%d %d", &num1, &num2);
    int sub1, sub2;

    if (num2 > num1) {
        
    for (int a = 1; a<= num1; a++) {
        sub1 = num2 - num1;
    }
    printf("%d", sub1);

    }
   


    



	return 0;

}