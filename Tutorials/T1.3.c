//3.1

//Convert Celsius to Fahrenheit and display it
#include<stdio.h>
int main()
{
	//variable declaration
	float celcius,fahrenheit;
	
	//take user inputs
	printf("Enter amount of celsius: ");
	scanf("%f", &celcius);
	
	//calculation
	fahrenheit = 9 / 5 * (celcius + 32);
	
	//printing details
	printf("Amount of Fahrenheit: %.2f\n",fahrenheit);
	
	return 0;
}//end of main function
