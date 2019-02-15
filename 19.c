#include <stdio.h>
int main(int argc, const char * argv[])
{
    int num, num_check, dig = 0, num_flag = 0 ;
    printf("\nEnter a number to check if it is a palindrome : ");
    scanf("%d", &num);
    num_check = num;

    while(num>0)
    {
        dig = num%10;
        num_flag = num_flag*10 + dig;
        num/= 10;
    }

    if(num_check == num_flag)
    {
        printf("%d is a Palindrome", num_check);
    }
    else{
        printf("%d is not a Palindrome", num_check);
    }
    return 0;
}