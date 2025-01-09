#include<stdio.h>
int main()
{
	int mark,mark_no = 1,sum = 0;
	float avg;
	
	while(mark_no <= 5)
	{
		printf("Input the mark no %d: ",mark_no);
		scanf("%d", &mark);
		
		if(mark < 0 || mark > 100)
		{
			printf("Invalid Input!!\n");
			
			printf("Input the mark no %d: ",mark_no);
			scanf("%d", &mark);	
		}
		mark_no++;
		sum = sum + mark;
		avg = sum / 5.0;	
	}
	printf("Average of the 5 marks is %.2f\n",avg);
	
	return 0;

}
