//n number of primes

#include<stdio.h>
int prime(int x);
int main()
{
	int n;
	printf("Enter the number of primes you want : \n");
	scanf("%d",&n);
	
	int i,xi,sum=0;
	int n1=3,n2=1000;
	i=n1;
	while(i<=n2)
	{
		xi=prime(i);
		if(xi==1)
		{
			printf("%d\t",i);
			sum=sum+1;
		}
		if(sum==n)
		{
			break;
		}
		i=++i;
	}

}

int prime(int x)
{
	int j,flag=0;
	for(j=2;j<=x/2;j++)
	{
		if(x%j==0)
		{
			flag=1;
		}
		if(flag==1)
		{
			break;
		}
	}
	if(flag==0)
	{
		return 1;
	}
	else{
	
	return 0;
}
}
