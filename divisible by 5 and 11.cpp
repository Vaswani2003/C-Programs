//program to find if a number is divisible by 5 and 11
#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);
	
	if(n%5==0)
	{
		if (n%11==0)
		{
			printf("%d is divisivble by both 5 and 11",n);
		}
	else {
		printf("%d is divisible by 5 but not 11",n);}
	}
	else if (n%11==0)
	{
		printf("%d is divisible by 11 but not 5",n);
	}
	else
	
	 {
	printf("%d is not divisible by 5 and 11",n);	
	}

}

