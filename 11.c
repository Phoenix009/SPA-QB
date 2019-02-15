#include<stdio.h>
void main()
{
    int num1, num2, max, min, flag;
    printf("\nEnter the range to search for Prime Numbers : ");
    scanf("%d %d", &num1, &num2);
    max = (num1>num2)?num1:num2;
    min = (num1<num2)?num1:num2;
    printf("\n");
    for(int i = min; i<=max; i++)
    {
        flag = 0;
        for(int j = 2; j<i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
        {
            printf("%d\t", i);
        }
    }
}