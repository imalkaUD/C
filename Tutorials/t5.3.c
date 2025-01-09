/* Write a C program to enter 4 module marks of a student from the keyboard and 
display the total of all four module marks*/
/*Modify the program written in i) above to enter 4 module marks of 3 students and 
display their total marks*/
//Display the student with the highest total mark

#include<stdio.h>
//declare the structure
struct student{
	
	int mark1,mark2,mark3,mark4,totalmodmarks;
	
}st1,st2,st3;
int main()
{
	//take student1 details
	printf("Enter module1 mark:");
	scanf("%d", &st1.mark1);
	
	printf("Enter module2 mark:");
	scanf("%d", &st1.mark2);
	
	printf("Enter module3 mark:");
	scanf("%d", &st1.mark3);
	
	printf("Enter module4 mark:");
	scanf("%d", &st1.mark4);
	
	st1.totalmodmarks = st1.mark1 + st1.mark2 + st1.mark3 + st1.mark4; 
	
	printf("Student1 total of all four module marks = %d\n", st1.totalmodmarks);
	
	//take student2 details
	printf("Enter module1 mark:");
	scanf("%d", &st2.mark1);
	
	printf("Enter module2 mark:");
	scanf("%d", &st2.mark2);
	
	printf("Enter module3 mark:");
	scanf("%d", &st2.mark3);
	
	printf("Enter module4 mark:");
	scanf("%d", &st2.mark4);
	
	st2.totalmodmarks = st2.mark1 + st2.mark2 + st2.mark3 + st2.mark4; 
	
	printf("Student2 total of all four module marks = %d\n", st2.totalmodmarks);
	
	//take student3 details
	printf("Enter module1 mark:");
	scanf("%d", &st3.mark1);
	
	printf("Enter module2 mark:");
	scanf("%d", &st3.mark2);
	
	printf("Enter module3 mark:");
	scanf("%d", &st3.mark3);
	
	printf("Enter module4 mark:");
	scanf("%d", &st3.mark4);
	
	st3.totalmodmarks = st3.mark1 + st3.mark2 + st3.mark3 + st3.mark4; 
	
	printf("Student3 total of all four module marks = %d\n\n", st3.totalmodmarks);
	
	//if condition
	if(st1.totalmodmarks > st2.totalmodmarks)
	{
		if(st1.totalmodmarks > st3.totalmodmarks)
		{
			printf("The highest total mark get student1: %d\n", st1.totalmodmarks);
		}
		else
		{
			printf("The highest total mark get student3: %d\n", st3.totalmodmarks);
		}
	}
	else if(st2.totalmodmarks > st3.totalmodmarks)
	{
		printf("The highest total mark get student2: %d\n", st2.totalmodmarks);
	}
	else
	{
		printf("The highest total mark get student3: %d\n", st3.totalmodmarks);
	}
	
	return 0;
}//end of main function

