#include <stdio.h>

void findOddEven(int arr[], int n) {
    printf("Even numbers: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }

    printf("\nOdd numbers: ");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
}

void main() {
    int arr[5] = {1, 2, 3, 4, 5};
    findOddEven(arr, 5);
}