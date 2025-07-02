#include <stdio.h>

void sortArray(int arr[], int n) {
    int temp;
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] > arr[j]) {
               
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

void main() {
    int arr[5] = {5, 3, 2, 4, 1};

    sortArray(arr, 5);
    printf("Sorted array: ");
    printArray(arr, 5);
}