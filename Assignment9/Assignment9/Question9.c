#include<stdio.h>
#include<string.h>
int main ()
{
	char str[]="jai hanuman";
	char *ptr=strrchr(str,'o');
	
	if(ptr!=NULL)
	{
		printf("last occurrence: %s\n",ptr);
	}else{
	
	 	printf("character are not found\n");
}
	return 0;
}