#include<stdio.h>
#include<math.h>
void main()
{
    int num, bit;
    printf("\nEnter a number to <256: ");
    scanf("%d", &num);
    printf("\nBinary Equivalent : ");
    for(int i = 7; i>=0; i--)
    {
        bit = 0;
        if(num>=pow(2,i))
        {
            bit = 1;
            num -= pow(2, i);
        }
        printf("%d", bit);
    }
}