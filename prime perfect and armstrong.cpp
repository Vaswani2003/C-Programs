#include<stdio.h>
#include<math.h>//prime armstrong or perfect number
int prime(int x);
int armstrong(int x);
int perfect(int x);

int main()
{	printf("Name : Vinamra Vaswani \nRoll No. : HU21CSEN0101331\n\n");
	int n;
	printf("Enter a number : \n");
	scanf("%d",&n);

int x,y,z;
x=prime(n);
y=armstrong(n);
z=perfect(n);

if(x==1){	printf("\n%d is a prime number",n);		}
else{	printf("\n%d is not a prime number",n);		}

if(y==1){	printf("\n%d is an armstrong number",n);	}
else{	printf("\n%d is not an armstrong number",n);	}

if(z==1){	printf("\n%d is a perfect number",n);	}
else{	printf("\n%d is not a perfect number",n);	}

}


int prime(int x)
{	int i,flag=0;
	for(i=2;i<=x/2;i++)
	{	if(x%i==0)
		flag=flag+1;
		break;
	}
	if(flag==0)	{return 1;}
	else {return 0;}
}

int perfect(int x)
{	int i,sum=0;
	for(i=1;i<=x/2;i++)
	{	if(x%i==0)	{	sum=sum+i;		}		}
	if(x==sum) 
	{return 1;}
	else {return 0;}
}

int armstrong(int x)
{	int i,ex,total=0,digits=0,sum=0;
	i=x;
	while(i!=0)
	{	digits=digits+1;
		i=i/10;
	}
	i=x;
	while(i!=0)
	{	ex=i%10;
		sum=sum+pow(ex,digits);
		i=i/10;
	}
	total=total+sum;	
	if(total==x)
	{return 1;}
	else {return 0;}
}



