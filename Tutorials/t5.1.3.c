/*Modify the program written in , above display the sum and average of the 
positive numbers entered*/

#include<stdio.h>
int main()
{
	//variable declaration
	int no = 0,count = 0,sum = 0,average= 0;
	
	//input a number
	printf("No:", no);
	scanf("%d", &no);
	
	//while condition
	while(no > 0)
	{
		count++;
		
		sum = sum + no;
		average = sum / count;
		
		printf("No:", no);
		scanf("%d", &no);
			
	}
	
	//printing details
	printf("Sumation of total numbers: %d\n", sum);
	printf("Average of total numbers: %d\n", average);
	
	return 0;
	
}//end of main function
