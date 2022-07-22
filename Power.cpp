//power of a number
#include<stdio.h>
int powwer(int x,int y);
int main()
{
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	int base,exponent;
	printf("Enter the base number :\n");
	scanf("%d",&base);
	printf("Enter the exponent number :\n");
	scanf("%d",&exponent);
	printf("\nThe value of %d to the power %d is %d",base,exponent,powwer(base,exponent));
	return 0;
}
int powwer(int x,int y)
{
	int i;
	if (y==0)
	{x=1;
	return x;}
	
else 
 {
 	int ex;
	for(i=1;i<=y;i++)
		{ex*=x;}		
	return ex;
}
}

