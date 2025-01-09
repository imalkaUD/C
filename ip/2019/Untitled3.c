//it23250192
#include<stdio.h>
#include<math.h>
#include<assert.h>
float calcAnnualInterest(float interestRate, float amount);
float findTotalAmount(float interestRate, float amount);
void testTotalAmount();
int main()
{
	testTotalAmount();
	
	int i;
	float amount,interestRate,totamount,annInterest;
	
	printf("Ente the initial amount to be invested: ");
	scanf("%f",&amount);
	
	printf("Ente Annual interest rate: ");
	scanf("%f",&interestRate);
	
	
	annInterest =calcAnnualInterest(interestRate,amount);
	totamount = findTotalAmount(interestRate,amount);
	
	printf("\n");
	for(i=1; i<=5; i++)
	{
		printf("Amount after year %d: %.2f\n",i,totamount);
		totamount = totamount + (totamount * interestRate / 100.0);
	}
	
	return 0;
	
}
float calcAnnualInterest(float interestRate, float amount)
{
	float interest,addinterestRate; 
	
	if(amount >= 1000000)
	{
		addinterestRate = interestRate + 0.5;
		interest = (amount * interestRate /100.0);
	}
	else
	{
		interest = (amount * interestRate /100.0);
	}
	return interest;
	
}
float findTotalAmount(float interestRate, float amount)
{
	float interest;
	
	float totamount = interest + amount;
	
	return totamount;
}
void testTotalAmount()
{
	assert(fabs(findTotalAmount(10.0,10000.0) - 11000)<0.01);  //assertttttttttttttttttttttttttttt
	assert(fabs(findTotalAmount(10.0,10000.0) - 12100)<0.01);
}
