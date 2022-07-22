#include<stdio.h>
// scope of a variable is inside the block where it is declared  
int main()
{
	int x=5;
	{
		int y=6;
		printf("%d",x+y);
	}
	printf("%d",x+y);
	return 0;
}
