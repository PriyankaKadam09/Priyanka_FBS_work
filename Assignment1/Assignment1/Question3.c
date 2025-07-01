#include<stdio.h>
int main (){
	

	int year;
	printf("enter a year \n");
	scanf("%d",&year);
	if(year % 4==0 && year % 100!=0 || year % 400==0)
	{
		printf("%d is a leap year \n");
		
	}else
	{
		printf("%d is a not leap year \n ");
	}
	
}