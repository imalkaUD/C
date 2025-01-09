/*Define a function called hypotenuse that calculates the length of the hypotenuse of a right 
triangle when the other two sides are given. The function should take two arguments of type 
double and return the hypotenuse as a double. In your main program write three assert 
statements to debug your function for the following scenarios*/
#include<stdio.h>
#include<assert.h>
#include<math.h>
double hypotenues(double s1,double s2);
void test_hypotenues();
int main()
{
	test_hypotenues();
	
	double s1;
	double s2;
	double s3;
	
	printf("Enter the value of side 1: ");
	scanf("%lf",&s1);
	
	printf("Enter the value of side 2: ");
	scanf("%lf",&s2);
	
	s3 = hypotenues(s1,s2);
	
	printf("Length of the hypotenuse of a triangle: %.3f",s3);
	
}
double hypotenuse(double s1,double s2)
{
	double s3 = sqrt(pow(s1,2) + pow(s2,2));
	return s3;
}
void test_hypotenues()
{
	assert(fabs(hypotenues(3.0,4.0) - 5) < 0.001);
	assert(fabs(hypotenues(5.0,12.0) - 13) < 0.001);
	assert(fabs(hypotenues(8.0,15.0) - 17) < 0.001);
}
