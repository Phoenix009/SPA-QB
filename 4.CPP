#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int fib, f1 = 0, f2 = 1, n;
	printf("\nEnter how many numbers to print : ");
	scanf("%d", &n);
	printf("\n%d\t%d\t", f1, f2);
	int i =1;
	while(i<=n-2)
	{
		fib = f1 +f2;
		printf("%d\t", fib);
		f1 = f2;
		f2 = fib;
		i++;
	} getch();

}