#include<stdio.h>
int main()
{
	int mark,count = 1,sum = 0,mcount;
	float average = 0;
	
	printf("Enter the mark %d: ",count);
	scanf("%d", &mark);
	
	while(count <= 5)
	{	
		if(mark < 0 || mark > 100)
		{
			printf("Invalid Input!!\n ");
			
			printf("Enter the mark %d: ",count);
			scanf("%d", &mark);
		}
		else
		{
			count++;
			if(count <= 5)
			{
				printf("Enter the mark %d: ",count);
				scanf("%d", &mark);
			}
			
			sum = sum + mark;
			mcount++;
			average = (float)sum / mcount;
		}		
	}
	printf("sum of the 5 marks is %d\n",sum);	
	printf("Average of the 5 marks is %.2f\n",average);
	
	return 0;	
}
