#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int count = 1 ;
	for(int i=1; i<=6; i++)
	{
		for(int j=1; j<=i; j++)
		{
			if(count % 2==0)
			{
				printf("%c\t", 64+count);
				count++;
			}
			else
			{
				printf("%c\t", 96+count);
				count++;
			}

		}
		printf("\n");
	}
}