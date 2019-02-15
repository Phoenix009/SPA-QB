#include <stdio.h>
int main(int argc, const char * argv[])
{
    int num, num_check, dig = 0;
    printf("\nEnter a number to check if it is a palindrome : ");
    scanf("%d", &num);
    
    while(num>0)
    {
        dig = num%10;
        num_check += dig;
        num/= 10;
    }
    printf("The sum of the digits : %d", num_check);
    return 0;
}