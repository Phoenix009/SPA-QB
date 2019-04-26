#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("\nEnter a string to check if it is a Palindrome : ");
	scanf("%[^\n]", str);
	int n = strlen(str);
	char strrev[n];

	for(int i = 0; i<n; i++)
	{
		strrev[i] = str[n-1-i];
	}

	if(strcmp(str, strrev) == 0)
		printf("\nPalindrome");
	else
		printf("\nNot Palindrome");
}