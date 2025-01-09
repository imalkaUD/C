#include<stdio.h>
int main()
{
	int no; 
	
	printf("Enter no: ");
	scanf("%d", &no);
	
	while(no > 0)
	{
		printf("number  %d\n", no);
		
		printf("Enter no: ");
		scanf("%d", &no);
	}
	
	return 0;
}
