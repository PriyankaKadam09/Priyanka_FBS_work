#include<stdio.h>

void mystrcpy(char *dest,const char *src)
{
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}
int main (){
	
	
	char src[] = "priyanka";
	char dest[50];
	mystrcpy(dest,src);
	printf("copied string:%s\n",dest);
	
	return 0;	
}
 	
