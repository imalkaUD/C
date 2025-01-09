//4.3
/* create a simple calculator. The program should allow the user to enter 
two numbers and an operator. The operators are  + , -  , *  , /     
*/

#include<stdio.h>
int main()
{
	//variable declaration
	int num1,num2,ans;
	char operator_ty;
	
	//tae user inputs
	printf("Enter the number 1: ");
	scanf("%d", &num1);
	
	printf("Enter the number 2: ");
	scanf("%d", &num2);
	
	printf("Enter the operator: ");
	scanf(" %c", &operator_ty);
	
	//condition part
	if(operator_ty == '+')
	{
		ans = num1 + num2;
	}
	else if(operator_ty == '-')
	{
		ans = num1 - num2;	
	}
	else if(operator_ty == '*')
	{
		ans = num1 * num2;	
	}
	else if(operator_ty == '/')
	{
		ans = num1 / num2;
	}
	else
	{
		printf("Invalid Operator\n");
	}
	
	//printing detail
	printf("Answer is %d\n",ans);
	
	return 0;
	
}//end of main function
