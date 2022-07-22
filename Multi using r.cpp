#include<stdio.h>
int multi(int,int);
int main()
{
	int x,y;
	printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter 2 numbers :");
	scanf("%d%d",&x,&y);
	printf("The product of %d and %d is %d",x,y,multi(x,y));
	return 0;
}

int multi(int x,int y)
{
	if(y==0){return 0;}
	else if(y>=1){return x+multi(x,y-1);}
}

