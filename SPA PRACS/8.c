#include<stdio.h>
void matInput(int r, int c, int mat[c][r])
{
	for(int i = 0; i<r; i++)
	{
		for(int j = 0; j<c; j++)
			scanf("%d", &mat[i][j]);
	}
}
void matOutput(int r, int c, int mat[c][r])
{
	printf("\n");
	for(int i =0; i<r; i++)
	{
		for(int j =0; j<c; j++)
			printf("%d\t", mat[i][j]);
		printf("\n");
	}
}
void main()
{
	int r, c;
	printf("\nEnter the order of the matrix (r, c) : ");
	scanf("%d %d", &r, &c);

	int a[r][c], b[r][c], mul[r][c];
	printf("\nEnter the contents of matrix A : \n");
	matInput(r, c, a);
	printf("\nEnter the contents of matrix B : \n");
	matInput(r, c, b);

	printf("\nMatA : ");
	matOutput(r, c, a);
	printf("\nMatB : ");
	matOutput(r, c, b);

	for(int i =0; i<r; i++)
	{
		for(int j =0; j<c; j++)
		{
			mul[i][j] = 0;
			for(int k = 0; k< c; k++)
			{
				mul[i][j] += (a[i][k] * b[k][j]);
			}
		}
	}

	printf("Multiplication Matrix : ");
	matOutput(r, c, mul);

}