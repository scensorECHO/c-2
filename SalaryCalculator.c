#include <stdio.h>

int main() 
{
	int hours;
	float hourly;
	int overtime;
	float total;

	printf("Enter # of hours worked (-1 to end): ");
	scanf("%d",&hours);

	while( hours!=-1 )
	{	
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%d",&hourly);

		if(hours > 40){
			overtime = hours-40;
		} else {
			overtime = 0;
		}

		total = (hours*hourly)+(overtime*hourly*1.5);

		printf("Salary is $%.2f\n",total);

		printf("Enter # of hours worked (-1 to end): ");
		scanf("%d",&hours);
	}
}