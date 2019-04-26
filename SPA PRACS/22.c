#include<stdio.h>
void main()
{
	int n;
	printf("\nHow many rows to print : ");
	scanf("%d", &n);

	for(int i =0; i<n; i++)
	{
		printf("\n");
		for(int j = 0; j<=i; j++)
			printf("%c", 65+j);
	}
}