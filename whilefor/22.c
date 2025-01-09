/* input the package type and number of people from the key board and calculate total cost. T*/
/*
Package Type 	Title 			Cost per person
1 			Horse ride 				2000/=
2 			Scuba Diving 			5000/=
3 			Water Rafting 			7000/=  */

#include<stdio.h>
int main()
{
	//variable declaration
	int pac_type,no_people;
	float tot_cost;
	
	//take user input
	printf("Enter the package type: ");
	scanf("%d", &pac_type);
	
	//while condition part
	while(pac_type == 1 || pac_type == 2 || pac_type == 3)
	{
		//switch condition part
		switch(pac_type)
		{
			case 1:
				printf("Enter the no of people: ");
				scanf("%d", &no_people);
				
				tot_cost = 2000 * no_people;
				printf("Total cost is %.2f\n",tot_cost);
			
				printf("Enter the package type: ");
				scanf("%d", &pac_type);
	
	 			break;
		
			case 2:
				printf("Enter the no of people: ");
				scanf("%d", &no_people);
			
				tot_cost = 5000 * no_people;
				printf("Total cost is %.2f\n",tot_cost);
			
				printf("Enter the package type: ");
				scanf("%d", &pac_type);
			
	 			break;
			
			case 3:
				printf("Enter the no of people: ");
				scanf("%d", &no_people);
			
				tot_cost = 7000 * no_people;
				printf("Total cost is %.2f\n",tot_cost);
			
				printf("Enter the package type: ");
				scanf("%d", &pac_type);

	 			break;	
		}	
	}
	
	//if condition part
	if(pac_type != 1 || pac_type != 2 || pac_type != 3)
	{
		printf("Invalid package type!!\n");
	}
	


	return 0;
}//end of main function
