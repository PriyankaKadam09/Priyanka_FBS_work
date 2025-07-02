#include <stdio.h>

void mergeArrays(int a[], int b[], int merged[], int n1, int n2) {
    for(int i = 0; i < n1; i++) {
        merged[i] = a[i];
    }
    for(int i = 0; i < n2; i++) {
        merged[n1 + i] = b[i];
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
    int merged[10];

    mergeArrays(a, b, merged, 5, 5);
    printf("Merged array: ");
    printArray(merged, 10);
}