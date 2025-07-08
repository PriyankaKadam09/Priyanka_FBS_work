#include <stdio.h>
int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0)
        return 0;
   } 
    return 1;
}
int main() {
    int arr[100], n;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("Prime numbers in the array: ");
    for (int i = 0; i < n; i++) {
    if (isPrime(arr[i]))
    printf("%d ", arr[i]);
    }

    return 0;
}