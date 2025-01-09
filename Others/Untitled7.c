#include<stdio.h>
#include<assert.h>
float calcpayment(int age, float size);
float calcsubsidy(float fpayment);
void displayDetails(float fpayment, float samount);
int main()
{
	assert(40800 == calcpayment(2,20));
	assert(51000 == calcpayment(7,25));
	
	int age,i;
	float size,fpayment,samount,payamount;
	
	for(i=1; i<=3; i++) 
	{
		printf("The age of the paddy crops in week(0/2/4/6/7): ");
		scanf("%d", &age);
	
		printf("The paddy field size in Hectare: ");
		scanf("%f", &size);
		
		fpayment = calcpayment(age,size);
		samount = calcsubsidy(fpayment);
	
		printf("fpayment %.2f\n",fpayment);
		
		displayDetails(fpayment,samount);		
	}
	
	return 0;
}
float calcpayment(int age, float size)
{
	float fpayment;
	
	if(age == 0)
	{
		fpayment = (35 * 60) * size;
	}
	else if(age == 2)
	{
		fpayment = (30 * 68) * size;
	}
	else if(age == 4)
	{
		fpayment = (65 * 68) + (25 * 75) * size;
	}
	else if(age == 6)
	{
		fpayment = (50 * 68) + (25* 75) * size;
	}
	else if(age == 7)
	{
		fpayment = (30 * 68) * size;
	}
	
	return fpayment;
}
float calcsubsidy(float fpayment)
{
	float samount;
	
	samount = fpayment * (15 / 100.0);
	
	return samount;
}
void displayDetails(float fpayment, float samount)
{
	float payamount = fpayment - samount;
	
	printf("\nPayable amount:\t\tSubsidy amount:\n");
	printf("%.2f\t\t%.2f\n\n\n",payamount,samount);
}

