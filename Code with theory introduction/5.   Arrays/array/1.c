#include<stdio.h>
int main()
{
	int cTransaction[1][5] = {};
	int cTransaction[4][5] = {};//declare arrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrrraay
	int cTransaction[4][5] = {};
	int cTransaction[4][5] = {};
	
	int i,j;

	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Account number: ");
			scanf("%d", &cTransaction[0][j]);
			
			printf("Customer Name: ");
			scanf("%10s", cTransaction[1][j]);
			
			printf("Transaction type(W/D): ");
			scanf(" %c", &cTransaction[2][j]);
			
			printf("Amount: ");
			scanf("%f", &cTransaction[3][j]);
		}

	}
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d", &cTransaction[0][j]);
	
		}
		if(i == 1){
			printf("%10s", &cTransaction[1][j]);
		}
			
		if(i == 2){
			printf(" %c", &cTransaction[2][j]);
		}
		
		if(i == 3){
			printf("%f", &cTransaction[3][j]);	
		}
	}
	
	return 0;
	
}
