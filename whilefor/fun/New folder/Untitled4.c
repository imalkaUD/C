#include<stdio.h>
int main()
{
	int mark1,mark2;
	float total,average;
	
	printf("Enter the mark 1:");
	scanf("%d", &mark1);
	
	printf("Enter the mark 2:");
	scanf("%d", &mark2);
	
	total = mark1 + mark2;
	average = total / 2.0;
	
	printf("Total is %.2f\n",total);
	printf("Average is %.2f\n",average);
	
	return 0;
}
