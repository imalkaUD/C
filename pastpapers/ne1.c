//input the number of months worked in the previousyearand the basic salary bonus
#include<stdio.h>
int main()
{
	int no_ofmonths;
	double salary,bonus;
	
	printf("Enter No of months:");
	scanf("%d", &no_ofmonths);
	
	printf("Enter Basic salary:");
	scanf("%lf", &salary);
	
	if(no_ofmonths >= 6) 
	{
		bonus = no_ofmonths * salary;
		
	}
	
	printf("Bonus: %.2f\n", bonus);
	
	return 0;
}
