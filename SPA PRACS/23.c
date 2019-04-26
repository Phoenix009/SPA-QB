#include<stdio.h>
void matInput(int n, int mat[n][n])
{
	for(int i =0; i<n; i++)
	{
		for(int j =0; j<n; j++)
			scanf("%d", &mat[i][j]);
	}
}
void matOutput(int n, int mat[n][n])
{
	printf("\n");
	for(int i =0; i<n; i++)
	{
		for(int j =0; j<n; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}
}

void main()
{
	int n;
	printf("\nEnter the order of the matrix : ");
	scanf("%d", &n);
	int a[n][n], b[n][n], add[n][n];
	printf("\nEnter Matrix A :\n");
	matInput(n, a);
	printf("\nEnter Matrix B :\n");
	matInput(n, b);

	for(int i =0; i<n ; i++)
	{
		for(int j =0; j<n; j++)
		{
			add[i][j] = a[i][j] + b[i][j];
		}
	}
	printf("\nMatA : \n");
	matOutput(n, a);
	printf("\nMatB : \n");
	matOutput(n, b);
	printf("MAtA + MatB : \n");
	matOutput(n, add);
}