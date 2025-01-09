/*
i) Write a C program to enter 4 module marks of a student from the keyboard and 
display the total of all four module marks.
ii) Modify the program written in i) above to enter 4 module marks of 3 students and 
display their total marks.
iii) Display the student with the highest total mark.  */

#include<stdio.h>
int main()
{
	int mark1,mark2,mark3,mark4,tot_marks,higest_mark;
	int student_no = 1,sno;
	
	while(student_no <= 3)
	{
		
		printf("Student %d\n",student_no);
		
		printf("Enter module 1 mark: ");
		scanf("%d", &mark1);
	
		printf("Enter module 2 mark: ");
		scanf("%d", &mark2);
	
		printf("Enter module 3 mark: ");
		scanf("%d", &mark3);
	
		printf("Enter module 4 mark: ");
		scanf("%d", &mark4);
			
		tot_marks = mark1 + mark2 + mark3 + mark4;
	
		printf("Student %d of all 4 module total mark is %d\n",student_no, tot_marks);
			
		if(higest_mark < tot_marks)
		{
			higest_mark = tot_marks;
			sno = student_no;
		}
		
		student_no++;	
	}
	

	
	printf("Student %d is having highest mark %d\n",sno,higest_mark);
	

	return 0;
}
