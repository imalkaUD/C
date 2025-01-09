//5.3
#include<stdio.h>
int main()
{
	int mark,student_no = 1;
	int highest,sno;
	
	while(student_no <= 3)
	{
		printf("Enter the student no:");
		scanf("%d", &student_no);
		
		int count = 1, sum = 0; 
		
		while(count <= 4)
		{
		printf("Enter the module mark:");
		scanf("%d", &mark);
		
		sum = sum + mark;
		count++;
		}
		printf("Total marks for four modules: %d\n",sum);
	
		if(highest < sum)
		{
			highest = sum;
			sno = student_no;
		}	
		student_no++;
	}

	
	printf("Student %d is having higest mark: %d\n",sno,highest);
	
		
	return 0;
}
