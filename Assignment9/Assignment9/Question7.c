#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[]="hanuman";
	char str2[]="hanuman";
	int result=strncmp(str1,str2,5);
	if(result==0)
	{
		printf("first 5 strings are equal\n");
	}else{
	
	 	printf("first 5 strings are not equal\n");
}
	return 0;
}