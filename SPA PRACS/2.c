#include<stdio.h>
void main()
{
	int num1, num2, choice;
	printf("\nEnter two numbers to prform Arithmetic operations : ");
	scanf("%d %d", &num1, &num2);
	printf("\n1 - Addition\n2 - Subtraction\n3 - Multiplication\n4 - Division\n5 - Modulo\nEnter your Choice : ");
	scanf("%d", &choice);
	switch(choice)
	{
		case 1:
			printf("%d + %d = %d", num1, num2, num1+num2);
			break;
		case 2:
			printf("%d - %d = %d", num1, num2, num1-num2);
			break;
		case 3:
			printf("%d * %d = %d", num1, num2, num1*num2);
			break;
		case 4:
			printf("%d / %d = %d", num1, num2, num1/num2);
			break;
		case 5:
			printf("%d % %d = %d", num1, num2, num1%num2);
			break;
		default:
			printf("\nYou had one job....");
	}
}