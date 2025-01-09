//t.3.2

/*inputs one five-digit number, separates the number into its individual 
digits and prints the digits separated from one another*/
// if user types, 42139, the program should print 4 2 1 3 9
#include<stdio.h>
int main()
{
	int number,digit1,digit2,digit3,digit4,digit5;
	
	printf("Enter the one=five digit number:");
	scanf("%d", &number);	
	
	digit1 = number / 10000;			//4.2139				4 
	digit2 = (number % 10000) / 1000;	//(2139)  - 2.139		2
	digit3 = (number % 1000) / 100;		//(139)	  - 1.39		1
	digit4 = (number % 100) / 10;		//(39)	  - 3.9			3
	digit5 = (number % 10) ;			//(3)					9
	
	printf("%d\t%d\t%d\t%d\t%d\n",digit1,digit2,digit3,digit4,digit5);
	
	return 0;
}
