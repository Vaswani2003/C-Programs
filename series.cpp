#include<stdio.h>
#include<math.h>
float fact(float);
int main()
{
printf("Enter value for x and n :\n");
int ex,n;
scanf("%d%d",&ex,&n);

float x,y;
float sum=0;
x=ex,y=1;
while(n>0)
{
	if(n%2!=0)
	{
		sum=sum+pow(x,y)/fact(y);
	}
	if(n%2==0)
	{
		sum=sum-pow(x,y)/fact(y);		
	}
	y=y+2;
	n--;
}

printf("%f",sum);

}
float fact(float n)
{
	float i,sum=1;
	for(i=1;i<=n;i++)
	{
		sum*=i;
	}
	return sum;
}

