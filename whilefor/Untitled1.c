// Display numbers from 10 to 20.
/* Prompt the user to enter series of numbers from the keyboard and display the 
numbers. If user enters a negative number stop reading the numbers*/
/*) Modify the program written in ii) above display the sum and average of the 
positive numbers entered.*/

#include<stdio.h>
int main()
{
	/*int num = 10; 
	
	while(num <= 20)
	{
		printf("%d ",num);
		
		num = num + 1;
	}
	
	return 0;*/
	
	//variable declaration
	int num,sum = 0,count = 1;
	float avg;
	
	//take user inputs
	printf("Enter the number: ");
	scanf("%d", &num);
	
	//condition part
	while(num > 0)
	{
		printf("%d\n",num);
		
		sum = sum + num;
		count++;
		
		printf("Enter the number: ");
		scanf("%d", &num);
	}
	
	//calculations
	avg = (float)sum /(count - 1);
	
	//printing detail
	printf("Summation is %d\n",sum);
	printf("Average is %.2f\n",avg);
	
	return 0;
}//end of main function
