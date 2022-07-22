//bubble sorting
#include<stdio.h>
int main()
{
	int a[10],i,c,j;
	for(i=0;i<10;i++)
	{
		printf("Enter vale for %d element ",i+1);
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
	printf("\nAfter sorting :\n");
	for(i=0;i<10;i++)
	{
		printf("\t%d",a[i]);
	}
}
