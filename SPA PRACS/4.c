#include<stdio.h>
void main()
{
	int n;
	printf("\nHow many rows to print : ");
	scanf("%d", &n);
	int j;
	for(int i = 0; i<n; i++)
	{
		printf("\n");
		
		for(j = 0; j<i; j++)
			printf("  ");

		for(j = 0; j<n-i; j++)
			printf("%c ", 65+j);

		for(j= 65+n-i-2 ; j>=65; j--)
			printf("%c ", j);
	}
}