#include<stdio.h>
void main()
{
    int n, fib, f0 = 0, f1 =1;
    printf("How many numbers to print : ");
    scanf("%d", &n);
    printf("%d\t%d\t", f0, f1);
    while(n-2>0)
    {
        fib = f0 + f1;
        printf("%d\t", fib);
        f0 = f1;
        f1 = fib;
        n--;
    }
    
}
