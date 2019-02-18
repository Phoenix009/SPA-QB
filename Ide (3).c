#include<stdio.h>
void main()
{
    int num, fib, f0 = 0, f1 = 1;
    printf("How many numbers to print : ");
    scanf("%d", &num);
    printf("%d\t%d\t", f0, f1);
    for(int i = 1; i<=num-2; i++)
    {
        fib = f0 + f1;
        printf("%d\t", fib);
        f0 = f1;
        f1 = fib;
    }
}