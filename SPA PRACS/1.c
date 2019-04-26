#include<stdio.h>
#include<math.h>
void main()
{
	int a, b, c;
	printf("\nEnter the coefficients of the quadratic equation : ");
	scanf("%d %d %d", &a, &b, &c);
	float D;
	D = sqrt((pow(b, 2)-(4*a*c)));
    printf("%.2f", D);
	if(D>0)
	{
		printf("Root1 : %.2f\nRoot2 : %.2f",((-b+D)/(2*a)),((-b+D)/(2*a)));
	}
	else if(D<0)
	{
		printf("Root1 : %d+i%d\nRoot2 : %.2f-i%.2f", (-b/(2*a)), (D/(2*a)), (-b/(2*a)), (D/(2*a)));
	}
	else if(D==0)
	{
		printf("Root1 : %.2f\nRoot2 : %.2f", -b/(2*a), -b/(2*a));
	}
}