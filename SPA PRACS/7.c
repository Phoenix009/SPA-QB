#include<stdio.h>
void main()
{
	int n;
	printf("\nHow many elements in the array : ");
	scanf("%d", &n);
	int num[n];

	printf("\nEnter the elements of the array : ");
	for(int i =0; i<n; i++)
		scanf("%d", &num[i]);

	for(int i =0; i<2; i++)
	{
		for(int j =n-2; j>=0; j--)
		{
			if(num[j]<num[j+1])
			{
				int temp = num[j];
				num[j] = num[j+1];
				num[j+1] = temp;
			}
		}
	}

	printf("\nLargest : %d\nSecond Largest : %d", num[0], num[1]);


}