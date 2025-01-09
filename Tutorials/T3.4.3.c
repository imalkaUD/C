//3.3

//Enter the mark obtained for IP module and display the grade
/* Mark 			Grade
100 >= Mark >= 80 	A
79 >= Mark >= 70 	B
69 >= Mark >= 45 	C
< 45 				F */
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
	if(100>=mark && mark>=80)
	{
		printf("Grade = 'A'");
	}
	else if(79>=mark && mark>=70)
	{
		printf("Grade = 'B'");
	}
	else if(69>=mark && mark>=45)
	{
		printf("Grade = 'C'");
	}
	else
	{
		printf("Grade = 'F'");
	}
	
	return 0;
}//end of main function
