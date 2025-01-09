//4.1
/*input an integer and convert the number into a positive 
number, if the user input is a negative value*/
#include<stdio.h>
int main()
{
	int number;
	
	printf("Enter the number:");
	scanf("%d", &number);
	
	if(number < 0)
	{
		number = number * -1;
	}
	
	printf("%d",number);
	
	return 0 ;
}//end of main function
