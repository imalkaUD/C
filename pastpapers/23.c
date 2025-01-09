#include<stdio.h>
int main()
{
	//variable declaration
	int course_no,marks;
	float course_fee,discount;
	
	//take user inputs
	printf("Enter the Course Number: ");
	scanf("%d", &course_no);
	
	printf("Enter the marks for Aptitude Test: ");
	scanf("%d", &marks);
	
	//condition part
	if(marks >= 80 && marks < 100)
	{
		if(course_no == 1)
		{
			discount = 150000 * (7.5 / 100.0);
			course_fee = 150000 - discount;
		}
		else if(course_no == 2)
		{
			discount = 175000 * (7.5 / 100.0);
			course_fee = 175000 - discount;
		}
		else
		{
		printf("Invalid course\n");		
		}
	
	}
	else
	{
		if(course_no == 1)
		{
			course_fee = 150000;
		}
		else if(course_no == 2)
		{
			course_fee = 175000;
		}
		else
		{
		printf("Invalid course\n");		
		}
	}
	
	//printing details
	printf("Discount:  %.2f\n",discount);
	printf("Course fee based on the marks:  %.2f",course_fee);
	
	return 0;
}//end of main function
