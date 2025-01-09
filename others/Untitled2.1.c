//it23250192


/*input three given price for a product in three persons,product price is rs.150 
and discount 15% for all persons and calculate qutient*/
#include<stdio.h>
//declare the structure
struct customer{
	
	int customer_id;
	double price;
	
	
}cus_1;
int main()
{
	//customer1
	//take customer details
	printf("Enter customer1 id: ");
	scanf("%d", &cus_1.customer_id);
	
	printf("Enter customer1 price: ");
	scanf("%lf", &cus_1.price);
	
	printf("customer 1 id = %d\n",cus_1.customer_id);
	printf("customer 1 price = %.2f\n",cus_1.price);
	
	

		



	
	return 0;	
}

