#include<stdio.h>
int main()
{
	//variable declaration
	int unit_num,cus_type;
	float total;
	
	//take user inputs
	printf("Enter Customer Type number(1-Domestic / 2-Samurdhi):  ");
	scanf("%d", &cus_type);

	printf("Enter used electricity units per month: ");
	scanf("%d", &unit_num);
	
	//condition part
	if(unit_num <= 100)
	{
		total = unit_num * 10.0;
	}
	else
	{
		total = (100 *10) + (unit_num - 100) * 30.0;
		if(cus_type == 1)
		{
			total = total + (total * (20 / 100.0));
		}
	}
	
	//printing detail
	printf("Monthly Charge: Rs.%.2f\n",total);
	
	return 0;
	
	
}
