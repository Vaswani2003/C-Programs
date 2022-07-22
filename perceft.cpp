//perfect number
#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number : \n");
	scanf("%d",&x);

int i,sum=0;
for(i=1;i<x;i++)
{
	if(x%i==0)
	{
		sum=sum+i;
	}
}
if (x==sum)
{
	printf("perfect");
}
else {
	printf("Not perfect");
}
return 0;
}
