#include<stdio.h>
//function declration
float calcpayment(int pacType,float totData);
float calctax(float payment);
void displayDetails(float payment,float tax);
int main()
{
	//variable declaration
	int pacType;
	float totData,payment,tax;
	
	//take user inputs
	printf("Enter the package type: ");
	scanf(" %d",&pacType);
	
	printf("Total data usage in GB: ");
	scanf("%f",&totData);
	
	//function calling
	payment = calcpayment(pacType,totData);
	tax= calctax(payment);
	
	displayDetails(payment,tax);
	
	
		
}
//function implementation
float calcpayment(int pacType,float totData)
{
	float eData,eCharge,payment;
	
	if(pacType == 1)
	{
		eData =	totData - 1.5;
		eCharge = (eData * 1024) * 2;
		payment = eCharge + 120;
		return payment;
	}
	else if(pacType == 2)
	{
		eData =	totData - 5;
		eCharge = (eData * 1024) * 1.5;
		payment = eCharge + 350;
		return payment;
	}
	else if(pacType == 3)
	{
		eData =	totData - 10;
		eCharge = (eData * 1024) * 1;
		payment = eCharge + 660;
		return payment;
	}
	else if(pacType == 4)
	{
		eData =	totData - 20;
		eCharge = (eData * 1024) * 0.5;
		payment = eCharge + 1200;
		return payment;
	}

}
float calctax(float payment)
{
	float tax = payment * 5 / 100.0;
	
	return tax;	
}
void displayDetails(float payment,float tax)
{
	float totbillPayment = payment + tax;
	
	printf("Payment: %.2f\n",payment);
	printf("Tax amount: %.2f\n",tax);
	printf("Monthly bill payment: %.2f\n",totbillPayment);
}
