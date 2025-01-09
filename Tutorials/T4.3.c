/*allow the user to enter 
two numbers and an operator, The operators are
1. +
2. -
3. *
4. /
You should print an appropriate error message if the user enters invalid operator
Use nested if-else statements in your program */

#include<stdio.h>
int main()
{

	int no1,no2,answer;
	char operatortype;
	
	printf("Enter number1:");
	scanf("%d", &no1);
	
	printf("Enter number2:");
	scanf("%d", &no2);
	
	printf("Enter the operator type:");
	scanf(" %c", &operatortype);
	
	if(operatortype == '+')
	{
		answer = no1 + no2;
		printf("Answer = %d\n", answer);
	}
	else if(operatortype == '-')
	{
		answer = no1 - no2;
		printf("Answer = %d\n", answer);
	}
	else if(operatortype == '*')
	{
		answer = no1 * no2;
		printf("Answer = %d\n", answer);
	}
	else if(operatortype == '/')
	{
		answer = no1 / no2;
		printf("Answer = %d\n", answer);
	}
	else
	{
		printf("Invalid operator\n");
	}
	
	return 0;
	
}
