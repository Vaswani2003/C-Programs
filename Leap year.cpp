#include<stdio.h>
int main()
{
	//Check whether entered year is a leap year or not
	printf("Enter year : \n");
	int year;
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("Leap");
	}
	else {
		printf("Not leap");
	}
}

