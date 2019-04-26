#include<stdio.h>
int sum(int n, int mat[n][n])
{
	int sum =0;
	for(int i = 0; i<n; i++)
	{
		for(int j =0; j<n; j++)
		{
			(i!=j)?sum+= mat[i][j]:0;
		}
	}
}
void main()
{
	int n;
	printf("\nEnter the order of the square matrix : ");
	scanf("%d", &n);
	int mat[n][n];

	for(int i = 0; i<n; i++)
	{
		for(int j =0; j<n; j++)
			scanf("%d", &mat[i][j]);
	}


	for(int i =0; i<n; i++)
	{
		for(int j =0; j<n; j++)
		{
			printf("%d\t", mat[i][j]);
		}
		printf("\n");
	}
	

	printf("\nSum of non diagonal elements  : %d", sum(n, mat));
}