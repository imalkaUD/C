//2.3

//input two marks and display the marks,calculatetotal and average mark
#include<stdio.h>
int main()
{
	//variable declaration
	int mark1, mark2, totalmark;
	float averagemark;
	
	//take user inputs
	printf("Enter the mark 1:");
	scanf("%d", &mark1);
	
	printf("Enter the mark 2:");
	scanf("%d", &mark2);
	
	//calculations
	totalmark = mark1 + mark2;
	averagemark = totalmark / 2.0;
	
	//printing details
	printf("Total of the mark: %d\n", totalmark);
	printf("Average of the mark: %.2f\n", averagemark);
	
	return 0;	
}//end of main function

