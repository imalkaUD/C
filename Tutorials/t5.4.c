//display this pattern
/*

* 
** 
*** 
**** 
***** 
****** 
******* 
*******
*****
***
*

*/
/*#include<stdio.h>
int main()
{
	//printing detail
	printf("*\n");
	printf("**\n");
	printf("***\n");
	printf("****\n");
	printf("*****\n");
	printf("******\n");	
	printf("*******\n");	
	printf("*******\n");	
	printf("*****\n");
	printf("***\n");
	printf("*\n");
	
	return 0;	
		
}//end of main function*/

#include<stdio.h>
int main()
{
	int i,j,m = 1;
	
	for(i=1; i<=11; i++)//rows
	{
		for(j=1; j<=m; j++)//coloumns
		{
		
			
			printf("*");
			
			
		}
		printf("\n");
		m++;
	}
	/*for(x=1; x<=7; x++)
	{
		for(y=1; y<=z; y-=2)
		{
			printf("*");
		}
		printf("\n");
		z++;
	}*/
	
	return 0;
}


























