#include<stdio.h>
int main()
{
	int no_units,no_years;
	float commission;
	
	printf("Enter the Number of Years: ");
	scanf("%d", &no_years);
	
	printf("Enter the Number of Units: ");
	scanf("%d", &no_units);
	
	if(no_years > 2)
	{
		if(no_units > 100)
		{
			commission = (no_units * 3500.00);
		}
	}
	printf("Com is Rs.%.2f",commission);
	return 0;
}
