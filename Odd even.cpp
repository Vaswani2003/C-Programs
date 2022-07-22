#include<stdio.h> // odd and even in a range
int odd(int x,int y);
int even(int x,int y);
int main()
{
	int n1,n2;
	printf("Enter the range : \n");
	scanf("%d%d",&n1,&n2);	
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n");
	odd(n1,n2);
	even(n1,n2);
}
int odd(int x,int y)
{
	printf("\nThe odd numbers are :");
	int i;
	for(i=x;i<=y;i++)
	{	if(i%2!=0)
		{printf("\t%d",i);} }
	}

int even(int x,int y)
{
	printf("\nThe even numbers are :");
	int i;
	for(i=x;i<=y;i++)
	{	if(i%2==0)
		{printf("\t%d",i);} }	
}

