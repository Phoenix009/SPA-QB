#include<stdio.h>
void main()
{
	int num1, num2, max;
	printf("Enter two numbers : ");
	scanf("%d %d", &num1, &num2);
	max = (num1>num2)?num1:num2;
	for(int i = max; i>=1; i--)
	{
		if(num1%i==0 && num2%i==0)
		{
			printf("GCD : %d", i);
			break;
		}
	}
}