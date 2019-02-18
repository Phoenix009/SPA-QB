#include<stdio.h>
void main(){
    int num, sum = 0;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    printf("Sum of %d natural numbers is : ", num);
    while(num>0)
    {
        sum+=num;
        num--;
    }
    printf("%d", sum);
}
