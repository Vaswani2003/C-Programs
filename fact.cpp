#include<stdio.h>
int fact(int n);
int main()
{
		int n;
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter value for n :\n");
	scanf("%d",&n);
	printf("%d factorial is %d",n,fact(n));
	return 0;
}

int fact(int n)
{

	if(n!=0)
	{	
	n=n*fact(n-1);
	return n;
	}
	else
	
	  return 1;

}

