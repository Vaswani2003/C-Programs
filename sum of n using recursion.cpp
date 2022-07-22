#include<stdio.h>
int sumof(int n);
int main()
{
	int n;
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter value for n :\n");
	scanf("%d",&n);
	
	printf("\nSum of first %d numbers is %d",n,sumof(n));
	
	return 0;
}

int sumof(int n)
{
	if(n!=0)
	{			n=n+sumof(n-1);
				return n;
	}
	
	else return 0;
}
