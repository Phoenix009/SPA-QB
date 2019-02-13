#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	for(int i=1 ;i<=4; i++)
	{
		for(int j =1; j<i; j++)
		{
			printf(" ");
		}
		for(j = 1; j<=5-i; j++)
		{
			printf("%c ", 64+i);
		}
		printf("\n");
	}
	getch();
}