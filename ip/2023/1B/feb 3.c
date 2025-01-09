#include<stdio.h>
#include<string.h>
int main()
{
	char strArray[15];
	char temp;
	int i;

	//store
	printf("Enter the text:");
	scanf("%15s", strArray);

	//display array
	printf("\nOrginal Array:\n");
	printf("%15s",strArray);
	
	for(i=0; i<7; i++)
	{
		temp = strArray[i];
		strArray[i] = strArray[14 - i];
		strArray[i] = temp;
		
	}
	
	printf("\n\nReversing Array:\n");
	for(i=0; i<15; i++)
	{
		printf("%c",strArray[i]);	
	}
	
	return 0;
}
	

