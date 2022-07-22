//greatest common divisor
#include<stdio.h>
int main()
{
	int i,j=0,jx=1,jy,n;
	printf("Enter value for 'n' : \n");
	scanf("%d",&n);
	printf("\n%d\t%d",j,jx);
	for (i=2;i<n;i++)
	{
		
		jy=j+jx;
		printf("\t%d",jy);
		
		j=jx;
		jx=jy;
		
		
	}
	return 0;
	
}
