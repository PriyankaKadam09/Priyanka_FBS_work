#include <stdio.h>

int findSum(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int total = findSum(arr, 5);
    printf("Sum of all numbers = %d", total);
    
}