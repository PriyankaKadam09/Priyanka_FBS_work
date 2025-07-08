#include<stdio.h>
#include<string.h>
int main ()
{
	char str[]="c programming";
	char *ptr=strstr(str,"c");
	
	if(ptr!=NULL)
	{
		printf("substring found: %s\n",ptr);
	}else{
	
	 	printf("substring not found\n");
}
	return 0;
}