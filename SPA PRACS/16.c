#include<stdio.h>
void main()
{
	int n;
	printf("\nHow many numbers in the array : ");
	scanf("%d", &n);
	int num[n];
	printf("\nEnter the numbres : ");
	for(int i =0; i<n; i++)
		scanf("%d", &num[i]);

	int *ptr;
	ptr = num;
	printf("\nThe nimbers in revrse order are : \n");
	for(int i = n-1; i>=0; i--)
		printf("%d\t", ptr[i]);
}