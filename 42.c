#include<stdio.h>
void main()
{
    int cp, sp;
    printf("\nEnter Cost Price : ");
    scanf("%d", &cp);
    printf("\nEnter Selling Price : ");
    scanf("%d", &sp);
    if(sp>cp)
    {
        printf("\nProfit\nProfit made : %d", sp-cp);
    }
    else if(cp>sp)
    {   
        printf("\nLoss\nLoss made : %d", cp-sp);        
    }
    else
    {
        printf("\nNeither Profit, Nor Loss");
    }
    
}