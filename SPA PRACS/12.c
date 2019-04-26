#include<stdio.h>
void bubbleSort(int n, int arr[n])
{
	int swap;
	for(int i =0; i<n; i++)
	{
		swap = 0;
		for(int j =0; j<n-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap = 1;
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
		if(swap==0)
			break;
	}
}


void main()
{
	int n;
	printf("\nEnter the no. of elements in the array : ");
	scanf("%d", &n);
	int num[n];
	printf("\nEnter the elements of the array : \n");
	for(int i = 0; i<n; i++)
		scanf("%d", &num[i]);
	bubbleSort(n, num);
	printf("\nThe array in Ascending order is : \n");
	for(int i = 0; i<n; i++)
		printf("%d\t", num[i]);
}