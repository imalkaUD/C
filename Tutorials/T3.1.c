//3.1

//Enter the radius of a circle and displays the diameter, the circumference and the area
#include<stdio.h>
int main()
{
	//variable declaration
	float radius, diameter, circumference, area;
	
	//take user inputs
	printf("Enter the radius of a circle:");
	scanf("%f", &radius);
	
	//calculations
	diameter = radius * 2.0;
	circumference = 2 * (22 / 7.0) * radius;
	area = (22 / 7) * radius * radius;
	
	//printing details
	printf("Diameter: %.2f\n", diameter);
	printf("Circumference: %.2f\n", circumference);
	printf("Area: %.2f\n", area);
	
	return 0;
}//end of main function
