#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	for(int i=1; i<=5; i++)
	{       int c = 64+i;
		for(int j=1; j<=i; j++)
		{
			printf("%c\t", c);
			c+=5-j;
		}
		printf("\n");
	}
	getch();
}
