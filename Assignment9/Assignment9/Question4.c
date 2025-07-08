#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[]="priyanka\n";
	char str2[]="kadam";
	char dest[20];
	strcat(str1,str2);
	printf("concatenated string %s\n",str1);
	
	return 0;
}