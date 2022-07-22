//reading an array
#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter vale for %d element ",i+1);
		scanf("%d",&a[i]);		
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
	}
	
	return 0;

}
