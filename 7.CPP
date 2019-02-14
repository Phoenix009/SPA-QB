#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num;
	printf("Enter a number to display its multipication table : ");
	scanf("%d", &num);
	for(int i =1; i<=10; i++)
	{
		printf("\n%d x %d = %d", num, i, num*i);

	}getch();
}