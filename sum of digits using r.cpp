#include<stdio.h>
int sumofdigits(int);
int main()
{
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter a number :");
	int num;
	scanf("%d",&num);
	int total=sumofdigits(num);
	printf("\n%d",total);
	
}

int sumofdigits(int number)
{
	if (number==0)	{		return 0;	}
	else 	{		return number%10 + sumofdigits(number/10);	}
}

