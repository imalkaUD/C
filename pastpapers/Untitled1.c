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
	int room_type, days_no;
	float fboard_basis, hboard_basis, amount;
	char accomodation_type, card_type;
	
	printf("Enter type of room:");
	scanf("%d", &room_type);
	
	if(room_type != 1 && room_type != 2 && room_type != 3)
	{
		printf("Invalid Type of room\n ");
	}
	else
	{
		printf("Enter accomodation basis(F/H):");
		scanf("%c\n", &accomodation_type);
	
		printf("Enter no of days:");
		scanf("%d\n", &days_no);
	
		printf("Enter rewarded card type(G, S, B):");
		scanf("%c\n", &card_type);
	}
	
	return 0;
}


	

	

