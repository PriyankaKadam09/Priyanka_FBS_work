#include<stdio.h>
int main ()
{
	int num=145,temp=num,sum=0;
	while(num>0){
		int digit=num %10;
		int fact=1;
		for(int i=1;i<=digit;i++)
		fact=fact*i;
		sum = sum + fact;
		num = num / 10;	
	}
	if(sum==temp){
	
	printf("strong number\n");
	}else{
	
	printf("not a strong number\n");
}
	
	
	
}