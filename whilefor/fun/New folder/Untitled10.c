//4.1
/*Write a C program to input an integer from the keyboard and convert the number into a positive 
number, if the user input is a negative value*/

#include<stdio.h>
int main()
{
	//variable declaration
	int number;
	
	//tae user input
	printf("Enter the number:");
	scanf("%d", &number);
	
	//condition part
	if(number < 0)
	{
		number = number * -1;
	}
	
	//printing detail
	printf("%d\n",number);
	
	return 0;
	
}//end of main function
