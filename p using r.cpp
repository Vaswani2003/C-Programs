#include<stdio.h>
int p(int ,int);
int main()
{
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter base value and exponent value :");
	int n,ex;
	scanf("%d%d",&n,&ex);	
	int res=p(n,ex);
	printf("\n%d to the power of %d is %d",n,ex,res);	
	return 0;
}

int p(int x,int y)
{
	if (y==0)	{	return 1;	}
	else if(y>=1)	{	return x*p(x,y-1);	}
}
n
