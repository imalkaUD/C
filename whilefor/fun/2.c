/* Enter the mark obtained for IP module and display the grade based on the 
below criteria*/
/*
Mark Grade
100 >= Mark >= 80 A
79 >= Mark >= 70 B
69 >= Mark >= 45 C
< 45  			 F
*/
#include<stdio.h>
int main()
{
	//variable declaration
	int mark;
	char grade;
	
	//take user inputs
	printf("Enter the mark:");
	scanf("%d", &mark);
	
	//condition part
	if(mark <= 100 && mark >= 80)
	{
		printf("Grade is A\n");
	}
	else if(mark <= 79 && mark >=70)
	{
		printf("Grade is B\n");
	}
	else if(mark <= 69 && mark >=45)
	{
		printf("Grade is C\n");	
	}
	else
	{
		printf("Grade is F\n");
	}
	
	return 0;
	
}//end of main function
