#include<stdio.h>
// strong numbers in an array;
int perfect(int);
int main()
{
	int n,i;
	scanf("%d",&n);
	
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int res;
	for(i=0;i<n;i++)
	{ 
		res=perfect(a[i]);
		if(res==1)
		{
			printf("%d ",a[i]);
		}
	}
	
	return 0;
}

int perfect(int num)
{
	int sum=0,i;
	for(i=1;i<=num/2;i++)
	{
		if (num%i==0)
		{
			sum+=i;
		}
	}
	
	if (sum==num)
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}

