//to find if a number is positive , negetive or 0 using switch case
#include<stdio.h>
int main()
{
	
int x;
printf("Enter an integer of your choice : \n");
scanf("%d",&x);
 
int ex;

if(x>0)
{
	ex=1;
}
else if (x<0)
{
	ex=-1;
}
else
{
ex=0;
}

switch (ex)
{
	case(1):	printf("\n%d is positive\a",x);
	break;
	
	case(-1):	printf("\n%d is negative\a",x);
	break;
	
	case(0):	printf("\n%d is zero\a",x);
	break;
	
}
}

