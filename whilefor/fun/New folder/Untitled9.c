//3.4.3

/*Enter the mark obtained for IP module and display the grade based on the 
below criteria*/
/*
Mark			 Grade
100 >= Mark >= 80  A
79 >= Mark >= 70   B
69 >= Mark >= 45   C
< 45 			   F  */

#include<stdio.h>
int main()
{
	int mark;
	char grade;
	
	printf("Enter the mark: ");
	scanf("%d", &mark);
	
	if(mark<=100 && mark>=80)
	{
		printf("A\n");
	}
	else if(mark>=70)
	{
		printf("B\n");
	}
	else if(mark>=45)
	{
		printf("C\n");
	}
	else
	{
		printf("F\n");
	}
	
	return 0;
}
