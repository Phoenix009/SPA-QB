#include<stdio.h>
void main()
{
	int n;
	printf("\nHow many rows to print : ");
	scanf("%d", &n);

	for(int i =0;i <n; i++)
	{
		for(int j = 0; j<n-i; j++)
			printf("  ");

		for(int j =0; j<i; j++)
			printf("%d ", 1+j);

		printf("\n");
	}
}