//it23250192
#include<stdio.h>
int main()
{
	int countPz,pzType;
	char pzSize;
	float amount,billAmount = 0,discount,netAmount;
	char creditc,onlineo,loyalc;
	
	printf("Enter the Pizza type: ");
	scanf("%d", &pzType);

	while(pzType != -1)
	{
		if(pzType == 1  || pzType == 2)
		{
			printf("Enter the Pizza size: ");
			scanf(" %c", &pzSize);
		
			if(pzSize == 'L' || pzSize == 'M')
			{
				printf("Enter the Number of pizza: ");
				scanf(" %d", &countPz);
				
				if(pzType == 1 && pzSize == 'L')
				{
					amount = 1720 * countPz;
				}
				else if(pzType == 1 && pzSize == 'M')
				{
					amount = 975 * countPz;
				}
				else if(pzType == 2 && pzSize == 'L')
				{
					amount = 1820 * countPz;
				}
				else if(pzType == 2 && pzSize == 'M')
				{
					amount = 1000 * countPz;
				}
				billAmount = billAmount + amount;
			}
			else
			{
				printf("Invalid Pizza Size!!\n ");
			}
		}
		else
		{
			printf("Invalid Pizza Type!!\n ");
		}
		printf("Enter the Pizza type: ");
		scanf("%d", &pzType);
	}
	
	printf("\n\nAre you paying by credit card(Y/N): ");
	scanf(" %c",&creditc);
				
	printf("Are you a loyalit customer(Y/N): ");
	scanf(" %c",&loyalc);
				
	printf("In this an online order(Y/N): ");
	scanf(" %c",&onlineo);
	
	printf("\nTotal bill amount: %.2f\n",billAmount);
	
	if(creditc == 'Y')
	{
		discount = billAmount * (20 / 100.0);
	}
	else if(loyalc == 'Y')
	{
		discount = billAmount * (15 / 100.0);
	}
	else if(onlineo == 'Y')
	{
		discount = billAmount * (5 / 100.0);
	}
	else if (creditc == 'N' || loyalc == 'N' || onlineo == 'N')
	{
		discount = 0;
	}
	
	printf("Discount: %.2f\n",discount);
	
	netAmount = billAmount - discount;
	
	printf("Net amount: %.2f\n",netAmount);
	
	return 0;
	
}
