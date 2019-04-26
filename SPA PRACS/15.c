#include<stdio.h>
void swap(int *x, int*y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void main()
{
	int num1, num2;
	printf("\nEnter two numbers : ");
	scanf("%d %d", &num1, &num2);
	printf("\nBefore Swapping :\n%d\t%d", num1, num2);
	swap(&num1, &num2);
	printf("\nAfter Swapping :\n%d\t%d", num1, num2);

}