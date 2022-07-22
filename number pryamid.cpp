//number pryamid
#include<stdio.h>
int main()
{
	int i,j,n=1,sum=0;
	
	for(i=1;i<=69;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n);
			n=n+1;
			sum=sum+i;
		}
		printf("\n");
	}
	printf("\nTotal sum = %d",sum);
}

