#include<stdio.h>
int main()
{
	int ch;
	printf("enter a alphabet");
	scanf("%c",&ch);
	if((ch>= 'A' && ch<='Z') ||(ch>='a'&& ch<='z'))
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
		ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
		{
		
		printf("%c is a vowel\n",ch);	
	}else{
		printf("%c is a constant\n",ch);
}
}
}
