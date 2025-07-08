#include<stdio.h>
#include<string.h>
int main ()
{
	char str[]= "abc";
	char set[]= "972004";

	int len = strcspn(str,set);
	
	printf("initial digits length: %d\n",len);

	return 0;
}