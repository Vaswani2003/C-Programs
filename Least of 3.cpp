#include<stdio.h>
int main()
//program to find least of 3 numbers
{
	printf("Enter 3 integer values : \n");
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	
	if((a<b)&&(a<c))
	{
		printf("%d is the least",a);
	}
	if ((b<a)&&(b<c))
	{
		printf("%d is the least",c);
	}
	if ((c<a)&&(c<b))
	{
		printf("\n\n%d is the least");
	}
}
