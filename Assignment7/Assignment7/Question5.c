#include<stdio.h>

int main ()
{
	int arr[50],n;
	int min,max;
	printf("enter number of elements in: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
		
	}
	printf("alernate elements in the array: ");
	for(int i = 0; i < n; i+=2){
		printf("%d",arr[i]);
	}
	return 0;
}
