#include<stdio.h>
void main()
{
    int count_alpha;
    for(int i = 1; i<=4; i++)
    {   
        count_alpha = 0;
        for(int j = 1; j<i; j++)
        {
            printf("  ");
        }
        for(int j = 1; j<= 5-i; j++)
        {
            printf("%c ", 64 + j);
            count_alpha++;
        }
        for(int j = count_alpha - 1; j>0 ; j--)
        {
            printf("%c ", 64 + j);
        }
        printf("\n");
    }
}