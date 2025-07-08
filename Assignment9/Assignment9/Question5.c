#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[20]="raya";
	char str2[]="pawar";
	
	strncat(str1,str2,2);
	printf("concatenated string %s\n",str1);
	
	return 0;
}