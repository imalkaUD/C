//pp-2020
//Enter the type of a room,accomodation type(F or H),number of days and the c-type(G, S,B )
//calculate the amount need to paid for the given no of days
#include<stdio.h>
struct room
{
	int roomtype,accotype,no_ofdays,cardtype;
	float room1price,room2price,room3price,amount;
	
}room1,room2,accotype_f,accotype_h;
int main(void)
{

	printf("Enter the type of a room:");
	scanf("%d", &roomtype);
	
	printf("Enter the accomodation type(F/H):");
	scanf("%d", &accotype);
	
	printf("Enter the no of days:");
	scanf("%d", &no_ofdays);
	
	printf("Enter the card type(G,S,B):");
	scanf("%d", &cardtype);	
	
	room1.accotype_f = 25555;
	room1.accotype_h = 17250;
	
	room2.accotype_f = 17500;
	room2.accotype_h = 12250;
	
	room3.accotype_f = 9000;
	room3.accotype_h = 7250;
	
	room1price = room1.accotype_f * no_ofdays;
	room1price = room1.accotype_h * no_ofdays;
	
	room2price = room2.accotype_f * no_ofdays;
	room2price = room2.accotype_h * no_ofdays;
	
	room3price = room3.accotype_f * no_ofdays;
	room3price = room3.accotype_h * no_ofdays;

	if(cardtype == 'G' )
	{
		if(amount = room1price * (12.5 / 100.0))
		{
			printf("Amount: %.2f\n",amount);
		}
		else if(amount = room2price * (11.5 / 100.0))
		{
			printf("Amount: %.2f\n",amount);
		}
		else(amount = room3price * (9.5 / 100.0);)
		{
			printf("Amount: %.2f\n",amount);
		}
	}
	else if(cardtype == 'S')
	{
			if(amount = room1price * (12.5 / 100.0))
		{
			printf("Amount: %.2f\n",amount);
		}
		else if(amount = room2price * (11.5 / 100.0))
		{
			printf("Amount: %.2f\n",amount);
		}
		else(amount = room3price * (9.5 / 100.0);)
		{
			printf("Amount: %.2f\n",amount);
		}
	}
	else if(cardtype == 'B')
	{
			if(amount = room1price * (12.5 / 100.0))
		{
			printf("Amount: %.2f\n",amount);
		}
		else if(amount = room2price * (11.5 / 100.0))
		{
			printf("Amount: %.2f\n",amount);
		}
		else(amount = room3price * (9.5 / 100.0);)
		{
			printf("Amount: %.2f\n",amount);
	
	}
	
	return 0;

	
}
