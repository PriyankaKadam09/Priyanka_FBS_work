#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[] = "operator";
	char str2[] = "string";
	
	int result = memcmp(str1,str2,3);
	if(result==0)
	printf("memory blocks are equal\n");
	printf("memory blocks are not equal\n");
	
	return 0;
}