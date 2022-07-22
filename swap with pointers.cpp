//swapping using pointers
#include<stdio.h>
int main()
{

	int a,b;
	printf("Enter 2 numbers : \n");
	scanf("%d%d",&a,&b);

int *x=&a,*y=&b;
int c=*x;
a=*y;
b=c;

printf("\n%d\t%d",a,b);

}
