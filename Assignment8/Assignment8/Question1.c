#include<stdio.h>

void findMinMax(int arr[],int n){
	int min = arr[0],max=arr[0];
	for(int i = 1; i < n; i++){
		if(arr[i] < min)
		min = arr[i];
		if(arr[i] > max)
		max = arr[i];
	}
	printf("minimum = %d\n", min);
	printf("maximum = %d\n", max);
	
}
int main (){
	int arr[5]={12,5,9,22,3};
	int n = 5;
	findMinMax(arr, n);
}