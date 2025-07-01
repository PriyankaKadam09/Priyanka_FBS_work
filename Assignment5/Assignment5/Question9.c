#include<stdio.h>
int main ()
{
	int n=4;
	
	for( int i = 1;i <= n; i++){
	
	for(int space = n - i; space > 0; space--){
		printf("  ");

	for(int star = 1; star <= i; star++){
		printf("* ");
	}
}
	printf("\n");
}

	
	for( int i = n - 1; i>= 1; i--){
	
	for(int space = n - i; space > 0; space--){
		printf("  ");

	for(int star = 1; star <= i; star++){
		printf("* ");
	}
}
	printf("\n");
}
}
