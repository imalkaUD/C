//5.1

#include<stdio.h>
int main()
{
	int num,sum = 0,count = 0;
	float avg;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while(num >= 0)
	{
		printf("%d\n",num);
		
		count++;
		sum = sum + num;
		avg = (float)sum / count ;
		
		printf("Enter the number: ");
		scanf("%d", &num);
			
	}
	printf("Summation is %d\n", sum);
	printf("Average is  %.2f\n", avg);
	
	return 0;	
}
