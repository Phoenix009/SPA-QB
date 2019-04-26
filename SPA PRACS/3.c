#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num;
	printf("\nEnter a number to check if it is prime or not : ");
	scanf("%d", &num);
	if(num == 0 || num == 1 || num == 2)
		printf("IDK");
	else{
		for(int i = 2; i<num; i++)
		{
			if(num%i == 0)
			{
				printf("\nNot Prime");
				exit(0);
		    }
		}
		printf("\nPrime");
	}
	return 0;
}