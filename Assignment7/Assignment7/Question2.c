#include<stdio.h>
int main ()
{
    int arr[50], n, search, i, found = 0;
    
	printf("Enter number of elements:\n");
    scanf("%d", &n);
	printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

    printf("Enter number to search:\n");
    scanf("%d", &search);

    for(i = 0; i < n; i++) {
        if(arr[i] == search) {
    printf("Number %d found at position %d\n", search, i + 1);
        found = 1;
        break;
    }
    }

    if(!found)
    printf("Number %d not found in array\n", search);

    return 0;
}
