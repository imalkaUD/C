//3.3

 
//input salary for a one employee,20% of the basic salary of an employee is given as the bonus. Calculate the bonus
#include<stdio.h>
int main()
{
	//variable declaration
	double salary, bonus;
	
	//take user inputs
	printf("Enter the salary: ");
	scanf("%lf", &salary);
	
	//calculations
	bonus = salary * (20 / 100.0);
	
	//printing detail
	printf("The bonus: %.2f\n", bonus);
	
	return 0;
}//end of main function
