#include<stdio.h>
int main ()
{
	int ch;
	printf("enter character");
	scanf("%c",&ch);
		if(ch>='A' && ch<='Z'){
		printf("%c is a uppercase",ch);
		ch=ch+32;
	}	else if(ch>='a' && ch<='z'){
		
		printf("%c is a lowercase",ch);
		ch=ch-32;
	}
}
