/*Write a function called circleArea() that take the radius of a circle as an argument and 
calculate and return the area. In the main program read the radius value from the user, call 
circleArea() and display the result.-*/
#include<stdio.h>
float circleArea (int radius);
int main()
{
	int r;
	float c_area;
	
	printf("Enter the radius: ");
	scanf("%d", &r);
	
	c_area = circleArea (r);
	
	printf("Circle area is %.2f",c_area);
	
}
float circleArea (int radius)
{
	float area = (22/ 7.0) * radius * radius;
	return area;
}
