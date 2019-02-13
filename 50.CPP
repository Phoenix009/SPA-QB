#include<stdio.h>
#include<conio.h>
void main()
{       clrscr();
	int n;
	printf("\n How many numbers to print : ");
	scanf("%d", &n);
	for(int i  = 1; i<=n; i++)
	{
		for(int j =1; j<=n-i; j++)
		{
			printf(" ");
		}
		for(j = 1; j<=i; j++)
		{
		printf("* ");
		}
		printf("\n");
	}
	for(i = 1; i<=n; i++)
	{
		for(int j =1; j<i; j++)
		{
			printf(" ");
		}
		for(j = 1; j<=(n+1)-i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	getch();
}