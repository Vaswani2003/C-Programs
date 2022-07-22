#include<stdio.h>
int main()
{
	int x;
	printf("Enter a number : \n");
	scanf("%d",&x);
int x1=x,y,y1=0;

while(x1>0)
{
	y=x1%10;
	y1=y1*10+y;
	
	x1=x1/10;
}

if(x==y1)
{
	printf("palindrome");
}
else {
	printf("not palindrome");
}
return 0;
}

