#include<stdio.h>
int main()
{
	printf("Enter number : \n");
	int num;
	scanf("%d",&num);
	int n,x,sum=0;
	n=num;
	while(n>0)
	{
		x=n%10;
		sum=sum*10 + x;
		n=n/10;
	}
(sum==num)?printf("%d is a palindrome",num):printf("%d is not a palindrome",num);
return 0;
}
 
 
