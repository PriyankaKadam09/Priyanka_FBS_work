#include<stdio.h>
#include<string.h>
int main ()
{
	char str[]="priyanka3";
	char set[]="972004";
	
	char *ptr=strpbrk(set,str);
	
	if(ptr!=NULL)
	{
		printf("first digit found: %c \n",*ptr);
	}else{
	
	 	printf(" not digit found\n");
}
	return 0;
}