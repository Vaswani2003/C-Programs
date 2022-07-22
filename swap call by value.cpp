#include<stdio.h>
int swap(int *,int *);
int main()
{
	
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter 2 integer values :\n");
	int n1,n2;
	scanf("%d%d",&n1,&n2);	
	swap(&n1,&n2);
	printf("\nSwapped values are %d & %d",n1,n2);
}

int swap(int *x,int *y)
{
 return *x=*x + *y - (*y=*x);
}

