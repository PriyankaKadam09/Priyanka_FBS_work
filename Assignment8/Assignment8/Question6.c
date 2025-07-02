#include <stdio.h>

int isPrime(int num) {
    if(num < 2) return 0;
    for(int i = 2; i <= num / 2; i++) {
        if(num % i == 0)
            return 0;
    }
    return 1;
}

void printPrimes(int arr[], int n) {
    printf("Prime numbers in array: ");
    for(int i = 0; i < n; i++) {
        if(isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
}

void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    printPrimes(arr, 5);
}