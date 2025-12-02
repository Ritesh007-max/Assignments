#include <stdio.h>

int printNumbers(int count, int n) {
    if (count > n) {
        return 0;
    }
    printf("%d ", count);
    return printNumbers(++count, n);
}

int printNumbers(int count) {
    if (count == 0) {
        return 0;
    }
    printf("%d ", count);
    return printNumbers(--count);
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    return n*factorial(n - 1);
}

int fibonacci(int terms) {

    if (terms == 0) return 0;
    if (terms == 1) return 1;

    return fibonacci(terms - 1) + fibonacci(terms - 2);

}

int digitSum(int number) {
    if (number < 1) {
        return 0;
    }
    int digit = number % 10;
    return digit + digitSum(number / 10);
}

int numReverse(int number, int rev) {
    if (number < 1) {
        return rev;
    }
    int digit = number % 10;
    rev = rev*10 + digit; 
    return numReverse(number / 10, rev);
}    

int digitCount(int number, int count) {
    if (number < 1) {
        return count;
    }
    int digit = number % 10;
    return digitCount(number / 10, count+1);
}

int arrMax(int arr[], int i, int size) {

    if (i >= size) {
        return arr[i];
    }

    int maxIndex = arrMax(arr, i + 1, size);

    if (maxIndex > arr[i + 1]) {
        return maxIndex;
    }
    else {
        return arr[i + 1];
    }

}

int powFn(int num, int toPow) {

    if (toPow == 0) {
        return 1;
    }

    return(num * powFn(num, toPow - 1));

}

int arrSum(int arr[], int i, int size) {

    if (i >= size) {
        return 0;
    }

    return (arr[i] + arrSum(arr, i + 1, size));
}

int newTable(int num, int i) {

    if (i > 10) {
        return 0;
    }

    printf("%d\n", num*i);

    return newTable(num, i + 1);    
}

int numSum(int n, int count1, int i) {

    if (i > n) {
        return 0;
    }

    return count1 + numSum(n, count1 + 1, i + 1);

}


int main() {
    
    int n = 5;
    int i = 1;
    int terms = 5;
    int number = 57586;
    int count = 0;
    int count1 = 1;
    int arr[] = {1,5,4,9,3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int num = 2;
    int toPow = 5;

    printf("%d", fibonacci(6));
    printf("%d", factorial(n));
    printNumbers(n);
    printf("%d", digitSum(number));
    printf("%d", numReverse(number, 0));
    printf("%d", digitCount(number, count));
    printf("%d", arrMax(arr, i, size));
    printf("%d", powFn(num, toPow));
    printf("%d", arrSum(arr, i, size));
    printf("%d", newTable(num, i));
    printf("%d", numSum(n, count1, i));
    return 0;
}
