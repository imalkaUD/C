//4.1.2
//update the bank balance of a customer based on the transactions performed (withdrawals/ deposits) by the customer
#include<stdio.h>
int main()
{
	//variable declaration
	float bank_bal,amount,new_bal;
	char transaction_type;
	
	//take user inputs
	printf("Enter the transaction type:");
	transaction_type = getchar();
	
	printf("Enter the bank balance: ");
	scanf("%f", &bank_bal);
		
	printf("Enter the Amount: ");
	scanf("%f", &amount);
	
	
	//condition part
	if(transaction_type == 'W' || transaction_type == 'w')	
	{
		printf("You have selected to withdraw money\n");
		new_bal = bank_bal - amount; 
		
	}
	else if(transaction_type == 'D' || transaction_type == 'd')
	{
		printf("You have selected to deposit money\n");
		new_bal = bank_bal + amount;	
	}
	else
	{
		printf("You have selected an invalid transaction type\n");
	}
	
	//printing detail
	printf("New balance is  %.2f\n",new_bal);
	
	return 0;
	

}
