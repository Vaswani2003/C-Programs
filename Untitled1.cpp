#include<stdio.h>
int fib(int);
int main ()
{
  int n;
  scanf("%d",&n);
 int res=fib(n);
 printf("%d",res);
  return 0;
}

int fib(int x)
{
  int x1=0, x2=1,c,i;
  if(x==0)
    {return x1;}
  for (i = 3; i <= x; i++)
  {
     c = x1 + x2;
     x1 = x2;
     x2 = c;
  }
  return x2;
}
 

