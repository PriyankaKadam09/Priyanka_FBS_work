#include <stdio.h>

void printAlternate(int arr[], int n) {
    printf("Alternate elements: ");
    for(int i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
}

void main() {
    int arr[10] = {1, 2, 3, 4, 5,6,7,8,9,10};
    printAlternate(arr, 10);
}