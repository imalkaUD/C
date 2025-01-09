#include<stdio.h>
int main()
{
	
	int empType,noDays,count;
	float salary,dPayment,bonusAmount;
	char conType;
	
	printf("Enter the employee catogery: ");
	scanf("%d",&empType);
	
	printf("Enter the Basic salary: ");
	scanf("%f",&salary);

	printf("Enter the No of days: ");
	scanf("%d",&noDays);
	
	printf("Enter the daily payment: ");
	scanf("%f",&dPayment);
	
		
	if(empType == 1)
	{
		bonusAmount = salary * 2;
	}
	else if(empType == 2 && noDays > 240)
	{
		bonusAmount = dPayment * 20;
	}
	else if(empType == 3)
	{
		bonusAmount = salary + 50000;
	}

	printf("Bonus amount is %.2f\n",bonusAmount);

	printf("Do you want to continue(Y/y/N/n): ");
	scanf(" %c", &conType);

	while(conType == 'Y' || conType == 'y')
	{
		count++;
		printf("Enter the employee catogery: ");
		scanf("%d",&empType);
	
		printf("Enter the Basic salary: ");
		scanf("%f",&salary);
	
		printf("Enter the No of days: ");
		scanf("%d",&noDays);
	
		printf("Enter the daily payment: ");
		scanf("%f",&dPayment);
	
	
		if(empType == 1)
		{
			bonusAmount = salary * 2;
		}
		else if(empType == 2 && noDays > 240)
		{
			bonusAmount = dPayment * 20;
		}
		else if(empType == 3)
		{
			bonusAmount = salary + 50000;
		}
	
		printf("Bonus amount is %.2f\n",bonusAmount);
	
		printf("Do you want to continue(Y/y/N/n): ");
		scanf(" %c", &conType);
		
	}
	while(conType == 'N' || conType == 'n')
	{
		break;
	}

	
	return 0;
}
