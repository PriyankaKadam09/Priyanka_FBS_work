#include<stdio.h>

int main ()
{
    int arr[50], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);  

    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   
    }

    printf("Even numbers in the array:\n");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Odd numbers in the array:\n");
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
