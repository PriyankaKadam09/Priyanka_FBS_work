#include<stdio.h>
#include<string.h>
int main ()
{
	char str[]="jai hanuman";
	char *ptr=strchr(str,'j');
	
	if(ptr!=NULL)
	{
		printf("first occurrence: %s\n",ptr);
	}else{
	
	 	printf("character are not found\n");
}
	return 0;
}