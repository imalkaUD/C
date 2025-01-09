//it23250192
//Enter the type of the room,accomodation type (full board,half board),number of days of the card type (G, S, B)
//calculate the amount need to paid for the given no of days
//discount give for the rewarded card holders 
/*card type    discount
G				12.5
S				11.5
B				9.5*/
#include<stdio.h>
int main()
{
	int room_type,no_days;
	float discount,amount = 0;
	char accomodation_type,cd_type;
	
	printf("Enter the room type: ");
	scanf("%d", &room_type);
	
	while(room_type != -1)
	{
	
		if(room_type == 1 || room_type == 2 || room_type == 3)
		{
			printf("Enter the accomodation type(F/H): ");
			scanf(" %c", &accomodation_type);
	
			printf("Enter the no of days: ");
			scanf("%d", &no_days);
	
			printf("Enter the card type(G,S,B): ");
			scanf(" %c", &cd_type);
		
			if(room_type == 1 && accomodation_type == 'F')
			{
				if(cd_type == 'G')
				{
					discount = 25555 * (12.5 / 100.0);
					amount = 25555 - discount;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'S')
				{
					discount = 25555 * (11.5 / 100.0);
					amount = (25555 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'B')
				{
					discount = 25555 * (9.5 / 100.0);
					amount = (25555 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				printf("Enter the room type: ");
				scanf("%d", &room_type);
				
				if(room_type == 1 || room_type == 2 || room_type == 3)
				{
					printf("Enter the accomodation type(F/H): ");
					scanf(" %c", &accomodation_type);
	
					printf("Enter the no of days: ");
					scanf("%d", &no_days);
	
					printf("Enter the card type(G,S,B): ");
					scanf(" %c", &cd_type);	
				}
				else
				{
					printf("Invalid type of room\n");
			
					printf("Enter the room type: ");
					scanf("%d", &room_type);
				}
				
			}
			else if(room_type == 1 && accomodation_type == 'H')
			{
				if(cd_type == 'G')
				{
					discount = 17250 * (12.5 / 100.0);
					amount = 17250 - discount;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'S')
				{
					discount = 17250 * (11.5 / 100.0);
					amount = (17250 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'B')
				{
					discount = 17250 * (9.5 / 100.0);
					amount = (17250 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				printf("Enter the room type: ");
				scanf("%d", &room_type);
				
				if(room_type == 1 || room_type == 2 || room_type == 3)
				{
					printf("Enter the accomodation type(F/H): ");
					scanf(" %c", &accomodation_type);
	
					printf("Enter the no of days: ");
					scanf("%d", &no_days);
	
					printf("Enter the card type(G,S,B): ");
					scanf(" %c", &cd_type);	
				}
				else
				{
					printf("Invalid type of room\n");
			
					printf("Enter the room type: ");
					scanf("%d", &room_type);
				}	
			}
			else if(room_type == 2 && accomodation_type == 'F')
			{
				if(cd_type == 'G')
				{
					discount = 17500 * (12.5 / 100.0);
					amount = 17500 - discount;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'S')
				{
					discount = 17500 * (11.5 / 100.0);
					amount = (17500 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'B')
				{
					discount = 17500 * (9.5 / 100.0);
					amount = (17500 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				printf("Enter the room type: ");
				scanf("%d", &room_type);
				
				if(room_type == 1 || room_type == 2 || room_type == 3)
				{
					printf("Enter the accomodation type(F/H): ");
					scanf(" %c", &accomodation_type);
	
					printf("Enter the no of days: ");
					scanf("%d", &no_days);
	
					printf("Enter the card type(G,S,B): ");
					scanf(" %c", &cd_type);	
				}
				else
				{
					printf("Invalid type of room\n");
			
					printf("Enter the room type: ");
					scanf("%d", &room_type);
				}
				
			}
			else if(room_type == 2 && accomodation_type == 'H')
			{
				if(cd_type == 'G')
				{
					discount = 12250 * (12.5 / 100.0);
					amount = 12250 - discount;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'S')
				{
					discount = 12250 * (11.5 / 100.0);
					amount = (12250 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'B')
				{
					discount = 12250 * (9.5 / 100.0);
					amount = (12250 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				printf("Enter the room type: ");
				scanf("%d", &room_type);
				
				if(room_type == 1 || room_type == 2 || room_type == 3)
				{
					printf("Enter the accomodation type(F/H): ");
					scanf(" %c", &accomodation_type);
	
					printf("Enter the no of days: ");
					scanf("%d", &no_days);
	
					printf("Enter the card type(G,S,B): ");
					scanf(" %c", &cd_type);	
				}
				else
				{
					printf("Invalid type of room\n");
			
					printf("Enter the room type: ");
					scanf("%d", &room_type);
				}
			}
			else if(room_type == 3 && accomodation_type == 'F')
			{
				if(cd_type == 'G')
				{
					discount = 9000 * (12.5 / 100.0);
					amount = 9000 - discount;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'S')
				{
					discount = 9000 * (11.5 / 100.0);
					amount = (9000 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'B')
				{
					discount = 9000 * (9.5 / 100.0);
					amount = (9000 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				printf("Enter the room type: ");
				scanf("%d", &room_type);
				
				if(room_type == 1 || room_type == 2 || room_type == 3)
				{
					printf("Enter the accomodation type(F/H): ");
					scanf(" %c", &accomodation_type);
	
					printf("Enter the no of days: ");
					scanf("%d", &no_days);
	
					printf("Enter the card type(G,S,B): ");
					scanf(" %c", &cd_type);	
				}
				else
				{
					printf("Invalid type of room\n");
			
					printf("Enter the room type: ");
					scanf("%d", &room_type);
				}
				
			}
			else if(room_type == 3 && accomodation_type == 'H')
			{
				if(cd_type == 'G')
				{
					discount = 7250 * (12.5 / 100.0);
					amount = 7250 - discount;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'S')
				{
					discount = 7250 * (11.5 / 100.0);
					amount = (7250 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				else if(cd_type == 'B')
				{
					discount = 7250 * (9.5 / 100.0);
					amount = (7250 - discount) * no_days;
					printf("Amount is %.2f\n",amount);
				}
				printf("Enter the room type: ");
				scanf("%d", &room_type);
				
				if(room_type == 1 || room_type == 2 || room_type == 3)
				{
					printf("Enter the accomodation type(F/H): ");
					scanf(" %c", &accomodation_type);
	
					printf("Enter the no of days: ");
					scanf("%d", &no_days);
	
					printf("Enter the card type(G,S,B): ");
					scanf(" %c", &cd_type);	
				}
				else
				{
					printf("Invalid type of room\n");
			
					printf("Enter the room type: ");
					scanf("%d", &room_type);
				}
				
			}
		}
		else
		{
			printf("Invalid type of room\n");
			
			printf("Enter the room type: ");
			scanf("%d", &room_type);
		}
	
	}
	

	return 0;
}

