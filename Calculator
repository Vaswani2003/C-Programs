//my attempt at calculator
#include<stdio.h>
#include<math.h>

int main()
{
printf("\t\t\t\tCALCULATOR\n");
printf("\n\t\t\t1\t2\t3\n\t\t\t4\t5\t6\n\t\t\t7\t8\t9\n\t\t\t[ . ]\t0\t=");

char ex;
float n1,n2;

printf("\n\n\n\n\t\tAVAILABLE OPERATIONS\n\n\n\n==> '+' for addition\n==> '-' for subtraction\n==> '*' for multiplication\n==> '/' for division\n==> '?' for root\n==> '~' for cuberoot\n==> '|' for square\n ");

printf("\nOPERATIONS : ");
scanf("%f%c%f",&n1,&ex,&n2);
switch (ex)

{
case '+' : 
			printf("%f",n1+n2);
	break;

case ('-') : 
			printf("%f",n1-n2);
	break;
	
case ('*') : 
			printf("%f",n1*n2);
	break;
	
case ('/') : 
			printf("%f",n1/n2);
	break;
	
case ('?') : {float z=sqrt(n1);
			printf("%f",z);}
	break;
	
case ('~') : {float z2=cbrt(n1);
			printf("%f",z2);}
	break;

case ('|'): {float z3=pow(n1,2);
		printf("%f",z3);}
	break;
	
default : printf("\nChoice not valid");
}


}


