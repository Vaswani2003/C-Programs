#include <stdio.h>
int hcf(int, int); 
int main()
{
	int x,y,ans;
   printf("Name : Vinamra Vaswani\nRoll No. : HU21CSEN0101331\n\n");
   printf("Enter 2 integer values: \n");
   scanf("%d%d",&x,&y);
   ans=hcf(x,y)   ;
   printf("HCF of %d & %d is %d",x,y,ans);
}

int hcf( int x,int y)
{
	while(x!=y)
	{
		if(x>y)	{		return hcf(x-y,y);		}
		else 	{		return hcf(x,y-x);		}
	}
}

