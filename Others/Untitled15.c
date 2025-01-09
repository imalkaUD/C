//it23250192


/*Input the fares of three buses and calculate total bus fares for the 
entire semester*/
//Assume that there are 5 days per week and 14 weeks for the semester
#include<stdio.h>
int main()
{
	//variable declaration
	float bus1_fare,bus2_fare,bus3_fare,oneday_busfare,semester_busfare;
	
	//take user inputs
	printf("Enter bus1_fare:");
	scanf("%f", &bus1_fare);
	
	printf("Enter bus2_fare:");
	scanf("%f", &bus2_fare);
	
	printf("Enter bus3_fare:");
	scanf("%f", &bus3_fare);
	
	//calculations
	oneday_busfare = (bus1_fare + bus2_fare + bus3_fare) * 2;
	semester_busfare = (oneday_busfare * 5) * 14;
	
	//printing detail
	printf(	"Total bus fare for the semester = %.2f\n",semester_busfare);
	
	return 0;	
}//end of main function
