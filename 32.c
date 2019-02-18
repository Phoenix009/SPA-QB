#include<stdio.h>
void main()
{
    int num, sum, dig;
    printf("\nEnter  four digit number to calculate the sum of the first and the fourth digit : ");
    scanf("%d", &num);
    for(int i = 1; i<=4; i++)
    {
        if(i == 1 || i == 4)
        {
            dig = num % 10;
            sum += dig;
        }
        num /= 10;
    }
    printf("\nSum of the first and fourth digit is : %d", sum);
}
