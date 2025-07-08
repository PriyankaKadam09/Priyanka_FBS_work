#include<stdio.h>

int main ()
{
	int arr[50],n,i;
	int min,max;
	printf("enter number of elements in array: ");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		
	}
	min=max=arr[0];
	for(i=1;i<n;i++){
		if(arr[i]<min)
		min=arr[i];
		if(arr[i]>max)
		max=arr[i];
	}
	printf("minimum number=%d\n",min);
	printf("maximum number=%d\n",max);
	
	return 0;
	
}