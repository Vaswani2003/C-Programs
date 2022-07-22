#include<stdio.h>
int raise(int x,int y);
int main()
{
	printf("Name : Vinamra Vaswani");
printf("\nRoll No. : HU21CSEN0101331");
int n,ex,k;
printf("\nEnter a base value : \n Enter an exponent value");
scanf("%d%d",&n,&ex);
k=raise(n,ex);
printf("\n%d",k);
return 0;
}

int raise(int x,int y)
{
	if(y!=0)
	return x*raise(x,y-1);
	else return 1;
} 


		
	

