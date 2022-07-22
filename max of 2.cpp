#include<stdio.h>
int max(int x,int y);
int main()
{
	printf("Name : Vinamra Vaswani \nRoll No. : HU21CSEN0101331\n\n");
	int x,y;
	printf("Enter 2 integer values :");
	scanf("%d%d",&x,&y);
	printf("\n%d is the greater number",max(x,y));
}
int max(int x,int y)
{	if(x>y){return x;}
	else {return y;}
}

