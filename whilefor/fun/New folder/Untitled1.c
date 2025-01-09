//it23250192
/*To travel from home to SLIIT Campus, a particular student needs to take three buses. 
Input the fares of each bus and estimate the traveling expenditure of the student for the 
entire semester*/
//Assume that there are 5 days per week and 14 weeks for the semester

#include<stdio.h>
int main()
{
	//variable declaration
	float busfare1,busfare2,busfare3,oneday_busfare,semester_busfare;
	
	//take user inputs
	printf("Enter bus 1 fare: ");
	scanf("%f", &busfare1);
	
	printf("Enter bus 2 fare: ");
	scanf("%f", &busfare2);
	
	printf("Enter bus 3 fare: ");
	scanf("%f", &busfare3);
	
	//calculations
	oneday_busfare = 2 * (busfare1 + busfare2 + busfare3);
	semester_busfare = oneday_busfare * 5 * 14;
	
	//printing detail
	printf("Total fare for entire semester: %.2f\n",semester_busfare);
	
	return 0;	
}//end of main function
