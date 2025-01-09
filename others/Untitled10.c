//it23250192 F301-PC452


/* A company is planning to give bonus to all the employees during the festive season, 
20% of the basic salary of an employee is given as the bonus. Calculate the bonus*/
#include<stdio.h>
int main()
{
	//variable declaration
	double salary,bonus;
	
	//take user inputs
	printf("Enter amount of salary:");
	scanf("%lf", &salary);
	
	//calculation
	bonus = salary * (20/ 100.0);
	
	//printing detail
	printf("Amount of bonus =  %.2f\n",bonus);
	
	return 0;
}//end of main function
