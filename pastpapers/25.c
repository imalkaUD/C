#include<stdio.h>
int main()
{
	int item_code,qty,count;
	float u_price,sum = 0;
	
	printf("Enter the item code: ");
	scanf("%d", &item_code);
	
	printf("Enter the quantity: ");
	scanf("%d", &qty);
	
	while(item_code != -1)
	{
		printf("Enter the item code: ");
		scanf("%d", &item_code);
	
		printf("Enter the quantity: ");
		scanf("%d", &qty);
		
		if(item_code == 1)
		{
			u_price = qty * 300.00;
		}
		else if(item_code == 2)
		{
			u_price = qty * 450.00;
		}
		else if(item_code == 3)
		{
			u_price = qty * 500.00;
		}
		count++;
	}
	

		
	sum = sum + u_price;
	
	
	printf("tot bill %.2f",sum);
	
	return 0;
}
