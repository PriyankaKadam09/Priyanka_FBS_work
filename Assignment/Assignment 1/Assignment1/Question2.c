#include<stdio.h>
int main()
{
	int num, temp, digit, sum=0;
	printf("enter the number");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		sum=sum + (digit * digit * digit);
		 num = num / 10;
		if(num==temp)
		{
			printf("palindrome");
			
		}else 
		{
			printf("not palindrome");
		}
	}
}