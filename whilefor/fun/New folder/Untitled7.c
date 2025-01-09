/* Enter the marks for two modules of a student and find the average mark. 
Display “Pass” if the average is above 45, otherwise display “Fail”*/
#include<stdio.h>
int main()
{
	int mark1,mark2;
	float average;
	
	printf("Enter the mark for module 1  :");
	scanf("%d", &mark1);
	
	printf("Enter the mark for module 2  :");
	scanf("%d", &mark2);
	
	average = (mark1 + mark2) / 2.0;
	
	printf("Average is %.2f\n", average);
	
	if(average > 45)
	{
		printf("Pass\n");
	}
	else
	{
		printf("Fail\n");
	}
	
	return 0 ;
}
