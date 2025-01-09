#include<stdio.h>
int main()
{
	int noCus;
	char pacType,addSev,sevType;
	float discount,price,totprice,totamount = 0;
	
	printf("Enter the Package Type(G/S/B): ");
	scanf(" %c",&pacType);
	
	printf("Enter the No of Participants: ");
	scanf("%d",&noCus);
	
	if(noCus > 10)
	{
		if(pacType == 'G')
		{
			discount = 20000 * 10/ 100.0;
			price = (20000 - discount) * noCus;
		}
		else if(pacType == 'S')
		{
			discount = 15000 * 10/ 100.0;
			price = (15000 - discount) * noCus;
		}
		else if(pacType == 'B')
		{
			discount = 10000 * 10/ 100.0;
			price = (10000 - discount) * noCus;
		}
	}
	else
	{
		if(pacType == 'G')
		{
			price = 20000 * noCus;
		}
		else if(pacType == 'S')
		{
			price = 15000 * noCus;
		}
		else if(pacType == 'B')
		{
			price = 10000 * noCus;
		}
	}

	printf("Do you want an additional service(Y/N): ");
	scanf(" %c",&addSev);
	
	if(addSev == 'N')
	{
		printf("Total Amount to be paid: %.2f\n",price);
	}
	
	while(addSev != 'N')
	{
		printf("Enter the service you like to book(C/V/E): ");
		scanf(" %c",&sevType);

		if(sevType == 'C')
		{
			totprice = 5000;
			totamount = totamount + totprice;
		
		}
		else if(sevType == 'V')
		{
			totprice = 7500;
			totamount = totamount + totprice;
	
		}
		else if(sevType == 'E')
		{
			totprice = 10000;
			totamount = totamount + totprice;
		
		}
		
		printf("Do you want an additional service(Y/N): ");
		scanf(" %c",&addSev);
		
	
		printf("Total Amount to be paid: %.2f\n",totamount + price);
	}

	
	return 0;
}
