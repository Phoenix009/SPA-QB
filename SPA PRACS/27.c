#include<stdio.h>
void main()
{
	int n;
	printf("\nEnter how many rows to print : ");
	scanf("%d", &n);

	for(int i = 0; i<n; i++)
	{
		printf("\n");
		for(int j = 0; j<i; j++)
			printf(" ");

		for(int j =0; j<n-i; j++)
			printf("%c", '*');
	}
}