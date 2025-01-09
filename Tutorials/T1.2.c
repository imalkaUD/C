//2.3

//input the marks of two subjects and calculate the average mark
#include<stdio.h>
int main()
{
	//variable declaration
	int mark1, mark2;
	float average;
	
	//take user inputs
	printf("Enter the mark 1:");
	scanf("%d", &mark1);
	
	printf("Enter the mark 2:");
	scanf("%d", &mark2);
	
	//calculation
	average = (mark1 + mark2) / 2;
	
	//printing detail
	printf("Average mark: %.2f\n", average);
	
	return 0;
	
}//end of main function
