#include<stdio.h>
void main()
{
    int c, n;
    int fact(int num)
    {
        int factorial = 1;
        for(int i = 2; i <= num; i++)
        {
            factorial *= i;
        }
        return factorial;
    }
    
    int C(int r, int c)
    {
        return fact(r)/(fact(c)*fact((r-c)));
    }
    
    printf("\n Enter limit : ");
    scanf("%d", &n);
    printf("\n");
    for(int i = 1; i<=n; i++)
    {
        
        for(int j =1; j<=n-i; j++)
        {
            printf(" ");
        }
        
        for( int j =0 ; j< 2*i - 1; j++)
        {
            c = C(i, j);
            if(c != 0)
            {
                printf("%d ", c);
            }
            else
            {
                break;
            }
            
        }
        printf("\n");
    }
}
