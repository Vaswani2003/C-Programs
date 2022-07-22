//operations using pointers
#include<stdio.h>
int main()

{
	int a,b;
	printf("Enter 2 integers :\n");
	scanf("%d%d",&a,&b);
	
	int *x=&a,*y=&b;
	
	printf("\nAddition = %d",*x + *y);
	printf("\nSubtraction = %d",*x-*y);
	printf("\nMultiplication = %d",*x * *y);
	printf("\nDivision = %f",(float)*x / (float)*y);
	
}
