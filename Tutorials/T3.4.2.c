//3.1

/*Enter the marks for two modules and calculate average mark, 
Display “Pass” if the average is above 45, otherwise display “Fail"*/
#include<stdio.h>
int main()
{
	//variable declaration
	int mark1,mark2;
	float average;
	
	//take user inputs
	printf("Enter the mark1:");
	scanf("%d", &mark1);
	
	printf("Enter the mark2:");
	scanf("%d", &mark2);
	
	//calculation
	average = (mark1 + mark2) / 2.0;
	
	//printing detail
	printf("Average: %.2f\n",average);
	
	return 0;	
}//endof main function
