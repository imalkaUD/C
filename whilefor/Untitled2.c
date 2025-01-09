/*input the first character of the shape (R – Rectangle, Triangle – T, Circle – C) and calculate the 
area. The following table shows the inputs and the formula to calculate the area of different shapes.*/
/*
Shape 			Inputs			 Area
Rectangle	 width, length 	width * length
Triangle 	base, height 	base * height / 2
Circle 		radius 			p * radius * radius   */
#include<stdio.h>
int main()
{
	int width,length,base,height,radius,count = 1;
	float area;
	char shape;
	

	for(count = 1 ; count <= 3 ; count++)
	{
		
		printf("Enter the character %d of the shape(R,T,C): ",count);
		scanf(" %c", &shape);
		
		
		if(shape == 'R')
		{
			printf("Enter width: ");
			scanf("%d", &width);
		
			printf("Enter length: ");
			scanf("%d", &length);
		
			area = width * length;
		
			printf("Area of the rectangle is %.2f\n",area);
		}
		
	
		else if(shape == 'T')
		{
			printf("Enter base: ");
			scanf("%d", &base);
		
			printf("Enter height: ");
			scanf("%d", &height);
		
			area = (1 / 2.0) * base * height;
		
			printf("Area of the triangle is %.2f\n",area);
		}
		else if(shape == 'C')
		{
			printf("Enter radius: ");
			scanf("%d", &radius);
	
			area = (22 / 7.0) * radius * radius;
		
			printf("Area of the circle is %.2f\n",area);	
		}
		
	}
	
	
	
	return 0;
}

