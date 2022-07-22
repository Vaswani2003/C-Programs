//gcd
#include<stdio.h>
int main()

{
	printf("Enter 2 values : \n");
	int x,y;
	scanf("%d%d",&x,&y);
	
	int i,k;
	
	for(i=1; i<=x && i<=y ;i++)
	{  if(x%i==0 && y%i==0)
	
		{
			k=i;
		}
	}
	
	printf("\nThe GCD is : %d",k);
	
}
