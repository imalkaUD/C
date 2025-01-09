#include<stdio.h>
int main()
{
	int product_no,userno;
	float amount;
	
	printf("Enter the Product No(1-product 1, 2-product 2): ");
	scanf("%d", &product_no);
	
	printf("Number of Users: ");
	scanf("%d", &userno);
	
	if(product_no == 1 && userno <= 100)
	{
		amount = userno * 15.50;
	}
	else
	{
		amount = 100 * 15.50 + (userno - 100) * 25.00;
	}
	if(product_no == 2 && userno <= 100)
	{
		amount = userno * 25.50;
	}
	else
	{
		amount = 100 * 15.50 + (userno - 100) * 35.00;
	}
	
	printf("Amount to be paid:  %.2f\n",amount);
	
	return 0;
}
