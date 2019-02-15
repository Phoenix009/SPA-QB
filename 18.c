#include <stdio.h>
#include<math.h>
int main(int argc, const char * argv[])
{
    int num, num_check, power = 0, num_flag = 0, dig = 0;
    printf("\nEnter a number to check for ARMstrong number : ");
    scanf("%d", &num);
    num_check = num;
    while(num>0)
    {
        power++;
        num/=10;
    }
    printf("\n Power = %d", power);
    num = num_check;

    while(num>0)
    {
        dig = num%10;
        num_flag += pow(dig, power);
        num/=10;

    }
    
    if(num_check == num_flag)
    {
        printf("\n%d is an ARMstrong number", num_check);
    }
    else{
        printf("\n%d is not a ARMstrong number", num_check);
    }
    return 0;
}


