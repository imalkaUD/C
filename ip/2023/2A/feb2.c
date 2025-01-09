#include<stdio.h>
int main()
{
	float rainfall[7] = {};
	float sum = 0,avg = 0,max,min;
	int i;
	
	for(i=0; i<7; i++)
	{
		printf("Enter the rainfall of day %d: ",i+1);
		scanf("%f", &rainfall[i]);	
	}
	
	printf("\n");
	for(i=0; i<7; i++)
	{
		printf("%.1f\t",rainfall[i]);
	}
	
	for(i=0; i<7; i++)
	{
		printf("\n\nDay 1 to %d\n",i+1);
		
		sum = sum + rainfall[i];
		avg = sum / (i+1);
		printf("Average rainfall: %.2fmm\n",avg);
		
		if(max < rainfall[i])
		{
			max = rainfall[i];
		}
		printf("Maximum rainfall: %.1fmm\n",max);
		
		if(rainfall[i] <= rainfall[0])    //**************** 
		{
			min = rainfall[i];
		}
		printf("Minimum rainfall: %.1fmm\n",min);
		
	}
	
	return 0;
}
