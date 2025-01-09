//it23250192
#include<stdio.h>
int main()
{
	//array and variables declaration
	int ratings[3][4] = {};
	int i,j,sum = 0,mNo;
	float avg = 0,higestAvg = 0;
	
	//store values
	for(i=0; i<3; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Enter the movie rating: ");
			scanf("%d",&ratings[i][j]);
		}
	}
	
	printf("\n\t\tReviewers:\n");
	//display array elements
	for(i=0; i<3; i++)
	{
		printf("Movie %d:  ",i+1);
		for(j=0; j<4; j++)
		{
			
			printf("%d\t ",ratings[i][j]);
		
		}
		printf("\n");
	}
	
	printf("\n");
	//array manipulation
	for(i=0; i<3; i++)
	{
		int sum = 0;
		float avg = 0;
		
		for(j=0; j<4; j++)
		{
			sum = sum + ratings[i][j];
			avg = sum / 4.0;
		}
	
		printf("Average rating for Movie %d: %.2f\n",i+1,avg);
		
		if(higestAvg < avg)
		{
			higestAvg = avg;
			mNo = i+1;
		}
	}
	
	printf("\nHigest Average mark is given Movie %d: %.2f\n",mNo,higestAvg);
	return 0;
}//end of main function
