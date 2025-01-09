//it23250192 F301-PC102


//input two numbers,check they are equal
#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter num1:");
	scanf("%d", &num1);
	
	printf("Enter num2:");
	scanf("%d", &num2);
	
	if(num1 == num2)
		printf("Both of are equal");
	else
		printf("Both of are not equal");
		
	return 0;
}
