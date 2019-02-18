#include<stdio.h>
void main(){
    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    printf("\n Odd numbers from 1 to %d are : ", num);
    
    for(int i = 1; i<=num; i++)
    {
        if(i%2 != 0)
            printf("%d\t", i);
    }
}
