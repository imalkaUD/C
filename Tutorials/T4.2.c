//update the bank balance of a customer based on the transactions performed (withdrawals/ deposits) by the customer

//Prompt the user to input transaction type (Withdrawal/ Deposit)
/*Read the user input from the keyboard using getchar( ) function (w – withdrawals, d –
deposits) */
/*If the user input ‘w’ or ‘W’ , display message “You have selected to withdraw money” 
If the user input‘d’ or ‘D’, display message “You have selected to deposit money” 
Otherwise display an error message “You have selected an invalid transaction type” 
and terminate the program*/
//Modify the above program to input the bank balance and the amount
//Based on the selected transaction type (withdrawal or deposit), display the new balance

#include<stdio.h>
int main()
{
	char transactiontype;
	float bankbalance,amount,newbalance;
	
	printf("Enter the transaction type(withdrawals/ deposits):");
	transactiontype = getchar();

	if(transactiontype == 'W' || transactiontype == 'w')
	{
		printf("Enter the bank balance:");
		scanf("%f", &bankbalance);
	
		printf("Enter the amount:");
		scanf("%f", &amount);
		
		printf("You have selected to withdraw money\n");
		newbalance = amount - bankbalance;
		
		printf("New balance: %.2f\n", newbalance);
		
	}
	else if(transactiontype == 'D' || transactiontype == 'd')
	{
		printf("Enter the bank balance:");
		scanf("%f", &bankbalance);
	
		printf("Enter the amount:");
		scanf("%f", &amount);
		
		printf("You have selected to deposit money\n");
		newbalance = amount + bankbalance;
		
		printf("New balance: %.2f\n", newbalance);
	}
	else 
	{
		printf("You have selected an invalid transaction type\n");
	}
	

	
	return 0;
}
