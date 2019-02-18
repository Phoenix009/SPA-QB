#include<stdio.h>
void main()
{
    int n;
    float a = 1, b = 2, sum = 0;
    printf("\nHow many numbers to calculate : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        sum +=(a/b);
        a += 2;
        b += 2;
    }
    printf("\nAnswer : %.2f", sum);
}