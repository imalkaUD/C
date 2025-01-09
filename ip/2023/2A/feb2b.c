#include<stdio.h>
int main()
{
	int smatrix[4][4] = {};
	int i,j;
	
	for(i=0; i<4; i++)
	{
		printf("Values for row %d\n",i+1);
		
		for(j=0; j<4; j++)
		{
			printf("Enter element %d:",j+1);
			scanf("%d",&smatrix[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%d  ",smatrix[i][j]);
		}
		printf("\n");
	}
	
	
	printf("\n");
	
	if(smatrix[0][1] == smatrix[1][0] && smatrix[0][1] == smatrix[1][0] && smatrix[0][1] == smatrix[1][0] && smatrix[0][1] == smatrix[1][0] && 
	smatrix[0][1] == smatrix[1][0])
	{
		printf("This is a symmetric matrix\n");
	}
	else
	{
		printf("This is not a symmetric matrix!!\n");
	}
	return 0;
}
	
