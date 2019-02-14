#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, fact =1;
	printf("Enter a number to calculate its factorial : ");
	scanf("%d", &num);
	for(int i =2; i<=num; i++)
	{
		fact*= i;
	}
	printf("\nFactorial : %d", fact);
	getch();
}