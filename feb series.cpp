#include<stdio.h>//febi series
int feb(int x);
int main()
{
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter value for n:");
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\t%d",feb(i));
	}
}

int feb(int x)
{
	if (x==0)
	{
		return 0;
	}
	else if (x==1)
	{
		return 1;
	}
	else
	{
	return feb(x-1)+feb(x-2);	
	}
}
