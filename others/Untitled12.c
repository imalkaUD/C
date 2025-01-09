//it23250192 F301-PC102


/*input total number of a class are 45,25 are boys and 80% of total students get
grade 'A' which are 15 boys and calculate amount of girls getting grade 'A'*/
#include<stdio.h>
int main()
{
	//variable declaration
	int totalstudents,girls;

	//calculations
	totalstudents = 45 * (80 / 100.0);
	girls = totalstudents - 15;
	
	//display calculation
	printf("Amount of girls got grade 'A' = %d\n",girls);
	
	return 0;
}//end of main function
