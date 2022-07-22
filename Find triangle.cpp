#include<stdio.h>
int main()
{
	// program to check whether the triangle is equilateral, isosceles, or scalene triangle.
	printf("Enter the angles :\n");
	int a1,a2,a3;
	scanf("%d%d%d",&a1,&a2,&a3);
	
if(a1+a2+a3==180)
{
	if (a1==a2)
	{
		if (a2==a3)
		
			{ printf("\nTriangle is equilateral");}
		else { printf("\nTriangle is isosceles");}
		
	}
	else if (a2==a3)
	{ printf("\nTriangle is isosceles");}
	else {printf("\nTriangle is scalene");}

}
else {
	printf("\nGiven angles dont belong to a triangle");
}
return 0;
}
