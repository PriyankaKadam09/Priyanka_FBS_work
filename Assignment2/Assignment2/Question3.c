#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter three numbers \n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		if(a>c)
		printf("%d greatest number is  \n",a);
		
	else
		printf("%d  greatest number is  \n",c);
}	else{
	
	 if(b>c){
		printf("%d greatest number is \n",b);
	}else
		printf("%d  greatest number is \n",c);

	}
}

