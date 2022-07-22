//factorial of a number
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number : \n");
	scanf("%d",&x);
	
	int i,sum=1;
	for (i=1;i<=x;i++)
	{
		sum=sum*i;
	}
	printf("The factorial of %d is %d",x,sum);
	
}

