#include<stdio.h>
int power(int num, int pow)
{
	int ans = 1;
	if(pow == 0)
		return 1;
	else{
		for(int i =0; i<pow; i++)
			ans *= num;
		return ans;
	}
}

void main()
{
	int num;
	printf("\nEnter a number to find its inary equivalent : ");
	scanf("%d", &num);
	int i = 7;
	do
	{
		if(num>=power(2, i))
		{
			printf("%d", 1);
			num-=power(2, i);
		}
		else{
			printf("%d", 0);
		}
		i--;
	}while(i>=0);
}