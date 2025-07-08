#include<stdio.h>
#include<string.h>
int main ()
{
	char str[] = "operator";
	memmove(str+2, str,3);
	printf("after memmove: %s",str);
	
	return 0;
}