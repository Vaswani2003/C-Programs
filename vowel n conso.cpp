//total numbe rof vovels and consonents in a string
#include<stdio.h>
int xstrlen(char *);
int xcount(char *);
int main()
{
	char name[15];
	printf("Enter name : ");
	scanf("%[^\n]s",name);
	int length=0;
	length=xstrlen(name);	
	printf("\nlength = %d",length);
	return 0;
	
}

int xstrlen(char *x)
{
	int length=0;	
	while(x  != '\0')
	{
		length++;
		x++;
	}
	return length;
}






