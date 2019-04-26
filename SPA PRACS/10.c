#include<stdio.h>

int GCD(int num1, int num2, int gcd)
{
	if(num1%gcd==0 && num2%gcd==0)
		return gcd;
	else{
		return(num1, num2, gcd-1);
	}
}

int LCM(int num1, int num2, int lcm)
{
	if(lcm%num1==0 && lcm%num2==0)
		return lcm;
	else
		return(LCM(num1, num2, lcm+1));
}

void main()
{
	int num1, num2;
	printf("\nEnter two numbers to find their GCD and LCM : ");
	scanf("%d %d", &num1, &num2);
	int gcd = GCD(num1, num2, (num1<num2)?num1:num2);
	int lcm = LCM(num1, num2, (num1>num2)?num1:num2);
	printf("\nGCD : %d", gcd);
	printf("\nLCM : %d", lcm);

}