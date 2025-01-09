//2.2

//Calculate the perimeter and area of a rectangle given the length and the width
#include<stdio.h>
int main()
{
	//variabledeclaration
	float length, width, area, perimeter;
	
	//take user inputs
	printf("Enter the length:");
	scanf("%f", &length);
	
	printf("Enter the width:");
	scanf("%f", &width);
	
	//calculations
	area = length * width;
	perimeter = 2 * (length + width);
	
	//printing details
	printf("Area of a rectangle: %.2f\n",area);
	printf("Perimeter of a rectangle: %.2f\n",perimeter);
	
	return 0;
	
}//end of main function
