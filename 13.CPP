#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int n;
	printf("\nHow many column to print : ");
	scanf("%d", &n);
	for(int i = 1; i <=n; i++)
	{
		for(int j=1; j<i; j++)
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
