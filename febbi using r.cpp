#include<stdio.h>
int febbi(int n);
int main()
{
	int n;
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter value for n :\n");
	scanf("%d",&n);
	
	printf("%d element of series is %d",n,febbi(n));
	
}

int febbi(int n)
{
	int nx=n;
	if (n==0)
	{return 0;
	}
	
	else for(n=1;n<=nx;n++)
	{
	return febbi(n-1)+febbi(n-2);
	}
}
	
	

