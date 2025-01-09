/*
PackageType  Title 		Cost per person
1		 	Horse ride 			2000/=
2 			Scuba Diving 		5000/=
3 			Water Rafting 		7000/=    */
// if user enter the invalide type as the package type,terminate the loop

#include<stdio.h>
int main()
{
	int package_type,no_people;
	float tot_cost;
	
	
	printf("Enter the Package type: ");
	scanf("%d", &package_type);

	
	while(package_type != -1)
	{
	
		if(package_type == 1)
		{
			printf("Enter the No of people: ");
			scanf("%d", &no_people);
		
			tot_cost = 2000 * no_people;
		
			printf("Total cost for Hourse ride: %.2f\n",tot_cost);
			
			printf("Enter the Package type: ");
			scanf("%d", &package_type);
		
		}
		else if(package_type == 2)
		{
			printf("Enter the No of people: ");
			scanf("%d", &no_people);
		
			tot_cost = 5000 * no_people;
		
			printf("Total cost for Scuba Diving: %.2f\n",tot_cost);
			
			printf("Enter the Package type: ");
			scanf("%d", &package_type);
			
		}
		else if(package_type == 3)
		{
			printf("Enter the No of people: ");
			scanf("%d", &no_people);
		
			tot_cost = 7000 * no_people;
			
			printf("Total cost for wr: %.2f\n",tot_cost);
			
			printf("Enter the Package type: ");
			scanf("%d", &package_type);
			

		}
	
	}
	
	return 0;

}
