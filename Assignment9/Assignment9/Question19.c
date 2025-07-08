#include<stdio.h>
#include<string.h>
int main ()
{
	char str[] = "hello";
	char *ptr = memchr(str,'o',strlen(str));
	if(ptr != NULL)
	{
		printf("found character at %s",ptr);
	}else{
		printf(" character not found");
	}
	
	
	return 0;
}