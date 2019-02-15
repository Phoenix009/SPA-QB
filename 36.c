#include<stdio.h>
void main()
{
    int num1, num2;
    printf("\nEnter two numbers to swap them : ");
    scanf("%d %d", &num1, &num2);
    printf("\nBEFORE Swapping : ");
    printf("Num1 = %d, Num2 = %d", num1, num2);
    num1 = num1 +num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("\nAFTER Swapping : ");
    printf("Num1 = %d, Num2 = %d", num1, num2);    
}