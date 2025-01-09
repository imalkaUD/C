#include<stdio.h>
int main()
{
	char ledPanel[4][4]= {0};
	int i,j,k,redbPositiond;
	
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("Enter the colour of the LED bulb:(R/G/B) ");
			scanf(" %c",&ledPanel[i][j]);
		}
	}
	
	printf("\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			printf("%c",ledPanel[i][j]);
		}
		printf("\n");
	}
	
	printf("\nRed LED bulb positions:\n");
	for(i=0; i<4; i++)
	{
		for(j=0; j<4; j++)
		{
			if(ledPanel[i][j] == 'R')
			{
				printf("[%d,%d]  ",i,j);
			}
			
		}
	}
	return 0;
}

