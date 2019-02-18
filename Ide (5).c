#include<stdio.h>
void main()
{
    int num , dig, sum = 0 ;
    printf("\nEnter a number to find the sum of its digits : ");
    scanf("%d", &num);
    while(num>0)
    {
        dig = num % 10;
        sum += dig;
        num /= 10;
    }
    printf("\nThe sum of the digits is : %d", sum);
}