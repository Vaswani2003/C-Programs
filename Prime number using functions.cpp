#include<stdio.h>
int prime();
int main()
{
	
	printf("Enter a number of your choice : \n");	
int check;
	check=prime();
	if (check==1)
	{
		printf("\n1");
	}
	else {
		printf("\n0");
	}
}

int prime()
{
	int n,i,sum=0;
	scanf("%d",&n);
	
	//logic
	for(i=1;i<=n;i++)
	{
		if (n%i==0)
		{
			sum++;
		}
	}
	if (sum==2)
	{
	return 1;
	}
	else {
		return 0;
	}
	
}
