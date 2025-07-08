#include<stdio.h>
#include<string.h>
int main ()
{
	char original[] = "priyanka kadam";
	char *copy = strdup(original);
	if(copy != NULL)
	{
		printf("duplicated string %s",copy);
	}else{
		printf(" memory allocation failed");
	}
	
	
	return 0;
}