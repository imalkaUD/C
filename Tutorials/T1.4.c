//3.2

 
/*Input the fares of three bus and estimate the traveling expenditure of the student for the 
entire semester*/
//Assume that there are 5 days per week and 14 weeks for the semester
#include<stdio.h>
int main()
{
	//variable declaration
	float bus1_fare, bus2_fare, bus3_fare, oneday_fare, semester_fare;
	
	//take user inputs
	printf("Enter bus 1 fare: ");
	scanf("%f", &bus1_fare);
	
	printf("Enter bus 2 fare: ");
	scanf("%f", &bus2_fare);
	
	printf("Enter bus 3 fare: ");
	scanf("%f", &bus3_fare);
	
	//calculations
	oneday_fare = (bus1_fare + bus2_fare + bus3_fare) * 2;
	semester_fare = oneday_fare * 5 * 14;
	
	//printing detail
	printf("Total fare for the entire semester: %.2f\n", semester_fare);
	
	return 0;
}
