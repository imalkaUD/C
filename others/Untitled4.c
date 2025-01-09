//it23250192 F301-PC102

//input a 4 digit number,add 8 it and divide 3 then multiply it 5
#include<stdio.h>
int main()
{
	//variable declaration
	int number,final_result;
	
	//take user inputs
	printf("Enter a 4 digit number:");
	scanf("%d", &number);
	
	if(number<=4)
		printf("number");
	else
		printf("It's not a 4 digit number'");
	
	//calculation
	number = (number + 8) / 3 * 5;
	
	//printing details
	printf("final result %d\n",final_result);
	
	return 0;
	
}//end of main function
