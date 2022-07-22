//Find minimum and maximum element in an array
#include<stdio.h>
int main()
{
	
	int a[10],i,j,c;
	for(i=0;i<10;i++)
	{
		printf("Enter value : ");
		scanf("%d",&a[i]);
	}
	
	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			if(a[i]>a[i+1])
			{
				c=a[i];
				a[i]=a[i+1];
				a[i+1]=c;
			}
		}
	}
	printf("\nLargest number is %d",a[10]);
	return 0;
	
}
