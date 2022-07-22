#include <stdio.h>
int binary(int x);
int main()
{
	int num;
    printf("Enter an integer :\n");
    scanf("%d",&num);
    printf("\nBinary substitute of %d is %d",num,binary(num));
    
    return 0;
}
int binary(int x)
{
	if(x==0)
	{
		return 0;
	}
	else 
	{
		return (x%2 +10 * binary(x/2));
	}
}
