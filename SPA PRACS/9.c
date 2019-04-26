#include<stdio.h>
int fact(int num)
{
	int ans = 1;
	if(num==1 || num == 0)
		return 1;
	else{
		for(int i = num; num>=2; num--)
			ans *=i;
		return ans;
	}
}

float BIO(int n, int r)
{
	return(fact(n)/(fact(r)/fact(n-r)));
}

void main()
{
	printf("\nEnter the value of n and r : ");
	scanf("%d %d", &n, &r);
	printf("\nBIO = %.2f", BIO(n, r));
}