#include<stdio.h>
#include<string.h>
int main ()
{
	char str1[]="jai hanuman";
	char str2[]="jai hanuman";
	int result=strcmp(str1,str2);
	if(result==0)
	{
		printf("strings are equal\n");
	}else{
	
	 	printf("strings are not equal\n");
}
	return 0;
}