#include<stdio.h>
#include<stdlib.h>

struct empData
{
	char name[30];
	int age;
	float salary;
	char doj[30];
};

void main()
{
	int n;
	printf("\nHow many employees data to be collected: ");
	scanf("%d", &n);

	struct empData emp[n], temp;

	printf("\nEnter data : \n");
	for(int i=0; i<n; i++)
	{
		printf("\nEnter the name of the employee %d : ", i+1);
		scanf("%s", emp[i].name);
		printf("\nEnter age of employee %d : ", i+1);
		scanf("%d", &emp[i].age);
		printf("\nEnter the salary of employee %d : ", i+1);
		scanf("%f", &emp[i].salary);
		printf("\nEnter date of joining of employee %d : ", i+1);
		scanf("%s", emp[i].doj);
	}

	for(int i =0; i<n; i++)
	{
		for(int j =0; j<n-1; j++)
		{
			if(emp[j].salary < emp[j+1].salary)
			{
				temp = emp[j];
				emp[j] = emp[j+1];
				emp[j+1] = temp;
			}
		}
	}

	printf("\nName\tAge\tSalary\tDateOfJoining");
	printf("\n-----------------------------------\n");
	for(int i=0; i<n; i++)
	{
		printf("\n%s\t%d\t%.2f\t%s", emp[i].name, emp[i].age, emp[i].salary, emp[i].doj);
	}
}