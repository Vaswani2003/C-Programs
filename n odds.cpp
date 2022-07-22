//odd numbers btw 1 n 100
#include<stdio.h>
int main()
{
	int i,j,sum=0,n=15;
	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			sum=sum+1;
			printf("\n%d",i);
			if (sum==n)
			{
				break;
			}
		}
		
	}
}
