//3.2
//inputs one five-digit number,separates the number into its individual digits 
//print the digits separated from one another
#include<stdio.h>
int main()
{
	int number, digit1, digit2, digit3, digit4, digit5;
	
	printf("Enter the one-five digit number:");
	scanf("%d", &number);
	
	digit1 = number / 10000;
	digit2 = (number % 10000) / 1000;
	digit3 = (number % 1000) / 100;
	digit4 = (number % 100) / 10;
	digit5 = (number % 10);
	
	
	printf("%d\t %d\t %d\t %d\t %d\n",digit1, digit2, digit3, digit4, digit5);
	
	return 0;
}
