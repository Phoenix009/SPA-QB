#include<stdio.h>
#include<math.h>
void main()
{
	int num, dig, num_save, n, num_check = 0;
	printf("\nEnter a number to check if it is a Armstrong number or not : ");
	scanf("%d", &num);
	num_save = num;
	n = 0;

	//No. of Digits
	while(num>0)
	{
		n++;
		num/=10;
	}
	num = num_save;

	//Find the armstrong equivalent
	while(num>0)
	{
		dig = num%10;
		num_check += pow(dig, n);
		num /= 10;
	}

	//Verify
	if(num_save == num_check)
		printf("\nArmstrong Number");
	else
		printf("\nNot Armstrong Number");
}