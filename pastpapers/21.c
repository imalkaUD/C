#include<stdio.h>
int main()
{
	int cus_type;
	float billamount,discount,finalbill_amount;
	
	printf("Enter the Customer Type(1-Loyality customer / 2-Nonloyality customer): ");
	scanf("%d", &cus_type);
	
	printf("Enter the Bill Amount: ");
	scanf("%f", &billamount);
	
	if(cus_type == 1)
	{
		if(billamount <= 2500)
		{
			discount = billamount * (5 /100.0);
			finalbill_amount = billamount - discount;
		}
		else
		{
			discount = billamount * (10 /100.0);
			finalbill_amount = billamount - discount;
		}
	}
	else if(cus_type == 2)
	{
		if(billamount >= 5000)
		{
			discount = billamount * (10 /100.0);
			finalbill_amount = billamount - discount;
		}
	}
	

	printf("Discount Amount is Rs.%.2f\n",discount);
	printf("Final Bill Amount is Rs.%.2f\n",finalbill_amount);
	
	return 0;
}
