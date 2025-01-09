/*Prompt the user to enter series of numbers from the keyboard and display the 
numbers. If user enters a negative number stop reading the numbers*/

#include<stdio.h>
int main()
{
	//declare a variable
	int no = 0;
	
	//take user inputs
	printf("No:", no);
	scanf("%d", &no);
	
	//while condition
	while(no > 0)
	{
		
		printf("No:", no);
		scanf("%d", &no);
			
	}
	
	return 0;
}//end of main function
