#include<stdio.h>

void calsum(int no1, int no2 );

int main()
{
	int result,no1,no2;
	
	printf("Enter num 1:");
	scanf("%d", &no1);

	printf("Enter num 1:");
	scanf("%d", &no1);
	
	calsum(no1,no2);

	
	return 0;
	
}
void calsum(int no1, int no2 )
{
	int total = no1 + no2;
	
	printf("Total is %d\n",total);
	
	
	
}
