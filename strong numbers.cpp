//strong number
#include<stdio.h>
int factorial(int x);
int strongcheck(int x);
int main()
{
	printf("Name : Vinamra Vaswani \nRoll No. : HU21CSEN0101331\n\n");
	printf("Enter a range of your choice :\n");
	int n1,n2;
	scanf("%d%d",&n1,&n2);
int i,nx,ex;
for(i=n1;i<=n2;i++)
{	nx=i;
	ex=strongcheck(nx);
	if(ex==1){	printf("\n%d is a strong number",i);	}	
}	
}	

int strongcheck(int x)
{
	int ex=x,y,xy,sum=0;
	while(ex!=0)
{
	y=ex%10;
	xy=factorial(y);
	sum=sum+xy;
	ex=ex/10;
}
	if(sum==x)	{	return 1;	}
	else 	{	return 0;	}
}

int factorial(int x)
{	int i,sum=1;
	for(i=1;i<=x;i++)	{	sum=sum*i;	}
	return sum;
}

