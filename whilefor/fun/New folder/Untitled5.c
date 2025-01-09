//t.3.1
/*Enter the radius of a circle and displays the diameter, the circumference 
and the area*/
#include<stdio.h>
int main()
{
	//variable declaration
	int radius,diameter,circumference;
	
	//take user inputs
	printf("Enter the radius of a circle:");
	scanf("%d", &radius);
	
	//calculations
	diameter = 2 * radius;
	circumference = 2 * (22 / 7.0) * radius;
	
	//printing details
	printf("Diameter of a circle: %d\n", diameter);
	printf("Circumference of a circle: %d\n", circumference);
	
	return 0;
}//end of main function
