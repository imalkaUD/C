//it23250192
#include<stdio.h>
int main()
{
	int countPz,pzType;
	char pzSize;
	float billAmount,discount,netAmount;
	char creditc,onlineo,loyalc;
	
	printf("Enter the Pizza type: ");
	scanf(" %d", &pzType);

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
				
				printf("\n\nAre you paying by credit card(Y/N): ");
				scanf(" %c",&creditc);
				
				printf("Are you a loyalit customer(Y/N): ");
				scanf(" %c",&loyalc);
				
				printf("In this an online order(Y/N): ");
				scanf(" %c",&onlineo);
			
				if(creditc == 'Y')
				{
					if(pzType == 1 && pzSize == 'L')
					{
						discount = 1720 * (20 / 100.0);
						billAmount = 1720 * countPz;
						netAmount = (1720 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 1 && pzSize == 'M')
					{
						discount = 975 * (20 / 100.0);
						billAmount = 975 * countPz;
						netAmount = (975 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 2 && pzSize == 'L')	
					{
						discount = 1820 * (20 / 100.0);
						billAmount = 1820 * countPz;
						netAmount = (1820 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 2 && pzSize == 'M')
					{
						discount = 1000 * (20 / 100.0);
						billAmount = 1000 * countPz;
						netAmount = (1000 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
				}
				else if(loyalc == 'Y')
				{
					if(pzType == 1 && pzSize == 'L')
					{
						discount = 1720 * (15 / 100.0);
						billAmount = 1720 * countPz;
						netAmount = (1720 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 1 && pzSize == 'M')
					{
						discount = 975 * (15 / 100.0);
						billAmount = 975 * countPz;
						netAmount = (975 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 2 && pzSize == 'L')	
					{
						discount = 1820 * (15 / 100.0);
						billAmount = 1820 * countPz;
						netAmount = (1820 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 2 && pzSize == 'M')
					{
						discount = 1000 * (15 / 100.0);
						billAmount = 1000 * countPz;
						netAmount = (1000 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
				}	
				else if(onlineo == 'Y')
				{
					if(pzType == 1 && pzSize == 'L')
					{
						discount = 1720 * (5 / 100.0);
						billAmount = 1720 * countPz;
						netAmount = (1720 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 1 && pzSize == 'M')
					{
						discount = 975 * (5 / 100.0);
						billAmount = 975 * countPz;
						netAmount = (975 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 2 && pzSize == 'L')	
					{
						discount = 1820 * (5 / 100.0);
						billAmount = 1820 * countPz;
						netAmount = (1820 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
					else if(pzType == 2 && pzSize == 'M')
					{
						discount = 1000 * (5 / 100.0);
						billAmount = 1000 * countPz;
						netAmount = (1000 - discount) * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
						printf("Discount: %.2f\n",discount);
						printf("Net amount: %.2f\n",netAmount);
					}
				}	
				else if(creditc == 'N' && loyalc == 'N' && onlineo == 'N')
				{
					if(pzType == 1 && pzSize == 'L')
					{
						billAmount = 1720 * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
					}
					else if(pzType == 1 && pzSize == 'M')
					{
						billAmount = 975 * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);	
					}
					else if(pzType == 2 && pzSize == 'L')	
					{
						billAmount = 1820 * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
					}
					else if(pzType == 2 && pzSize == 'M')
					{
						billAmount = 1000 * countPz;
						printf("\nTotal bill Amount: %.2f\n",billAmount);
					}
				}
			}
			else
			{
				printf("Invalid Pizza Size!!\n");
			}
		}
		else
		{
			printf("Invalid Pizza Type!!\n");
		}
		printf("\nEnter the Pizza type: ");
		scanf(" %d", &pzType);
	}
	return 0;
}
	

  
