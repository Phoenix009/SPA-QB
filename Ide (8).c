#include<stdio.h>
void main()
{
    int n, num = 1;
    long sum, fact;
    printf("\nEnter how may numbers to calculate : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {   
        fact = 1;
        for(int j = 1; j<=num ; j++)
        {
            fact*= j;
        }
        sum += fact;
        num += 2;
    }
    printf("\nAnswer : %d", sum);
}