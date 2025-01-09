//t.1.3.3
//20% of the basic salary of an employee isgiven as the bonus and calculate the bonus
#include<stdio.h>
int main()
{
	//variable declaration
	float salary,bonus,new_salary;
	
	//take user input
	printf("Enter the basic salary for an employee:");
	scanf("%f", &salary);
	
	//calculation
	bonus = salary * (20 / 100.0);
	new_salary = salary + bonus;
	
	//printing detail
	printf("New salary for an employee is %.2f\n",new_salary);
	printf("The bonus is %.2f\n",bonus);
	
	return 0;
	
}//end of main function
