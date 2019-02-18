#include<stdio.h>
void main()
{
    int num, flag = 0;
    printf("Enter a number to check if its prime or not : ");
    scanf("%d", &num);
    for(int i = 2; i<num; i++)
    {
        if(num % i == 0 )
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
        printf("\n%d is not prime", num );
    else
        printf("%d is prime", num);
}