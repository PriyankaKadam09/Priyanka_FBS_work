#include<stdio.h>
#include<string.h>
int main ()
{
	char str[]="priyanka";
	char dest[20];
	strncpy(dest,str,5);
	dest[5]='\0';
	printf("copied string %s",dest);
	
	return 0;
}