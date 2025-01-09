#include<stdio.h>
int main()
{
	FILE * ptr;
	
	ptr = fopen("ticket.dat","w");
	
	if(ptr == NULL)
	{
		printf("Unable to open the file.\n");
		return -1;
	}
	
	char movType,ticType;
	int noTic,i = 1;
	
	for(i=1; i<=5; i++)
	{
		printf("Movie name(H/F/S): ");
		scanf(" %c", &movType);
		
		printf("Ticket type(B/N): ");
		scanf(" %c", &ticType);
		
		printf("No of tickets: ");
		scanf("%d", &noTic);
		
		printf("\n");
		
		fprintf(ptr,"%c  %c  %d\n",movType,ticType,noTic);
	}
	
	fclose(ptr);
	
	return 0;
	
}
	
