#include<stdio.h>
int main()
{
	double price,amount;
	int qty;
	
	printf("enter price :");
	scanf("%lf", &price);
	
	printf("enter qty:");
	scanf("%d", &qty);
	
	amount = price * qty;
	
	printf("amount = %.2f",amount);



	
	return 0;
}
