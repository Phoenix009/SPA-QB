#include<stdio.h>
#include<math.h>
void main()
{
    float num = 1, sum = 0;
    int n;
    printf("\nHow many terms to calculate : ");
    scanf("%d", &n);
    for(int i = 1; i<=n; i++)
    {
        sum += (pow(num, 2)/ pow(num, 3));
        num += 2;
    }
    printf("\nAnswer : %.5f", sum);
}
