#include <stdio.h>

void addArrays(int a[], int b[], int c[], int n) {
    for(int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void main() {
    int a[5] = {1, 2, 3, 4, 5};
    int b[5] = {10, 20, 30, 40, 50};
    int c[5];

    addArrays(a, b, c, 5);
    printf("Sum of two arrays: ");
    printArray(c, 5);
}