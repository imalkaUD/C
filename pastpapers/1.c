//it23250192
//discount is 15%,calculate the sales price and remain value,complete the format and display it
/*c_id  given price  product price   sales price   remain value
  1   	1000			800				...			...
  2		500				350				...			...
  3		200				150				...			...
*/

#include<stdio.h>
//declare the structure
struct customer
{

	int customer_id;
	double given_price; 
	double sales_price; 
	double product_price;
	double discount;
	double remain_value;
	
}cus_1,cus_2,cus_3;
int main()
{
	//take customer 1 details
	printf("Enter cus_1 customer id:");
	scanf("%d", &cus_1.customer_id);
	
	printf("Enter cus_1 product_price:");
	scanf("%lf", &cus_1.product_price);
	
	printf("Enter cus_1 given price:");
	scanf("%lf", &cus_1.given_price);
	
	//cutomer 2
	printf("Enter cus_2 customer id:");
	scanf("%d", &cus_2.customer_id);
	
	printf("Enter cus_2 product_price:");
	scanf("%lf", &cus_2.product_price);
	
	printf("Enter cus_2 given price:");
	scanf("%lf", &cus_2.given_price);
	
	//customer 3
	printf("Enter cus_3 customer id:");
	scanf("%d", &cus_3.customer_id);
	
	printf("Enter cus_3 product_price:");
	scanf("%lf", &cus_3.product_price);
	
	printf("Enter cus_1 given price:");
	scanf("%lf", &cus_3.given_price);
	
	
	//customer 1 calculations
	cus_1.discount = cus_1.product_price * 15 / 100.0;
	cus_1.sales_price = cus_1.product_price - cus_1.discount;
	cus_1.remain_value = cus_1.given_price - cus_1.sales_price;
	
	//customer 2 calculations
	cus_2.discount = cus_2.product_price * 15 / 100.0;
	cus_2.sales_price = cus_2.product_price - cus_2.discount;
	cus_2.remain_value = cus_2.given_price - cus_2.sales_price;
	
	//customer 3 calculations
	cus_3.discount = cus_3.product_price * 15 / 100.0;
	cus_3.sales_price = cus_3.product_price - cus_3.discount;
	cus_3.remain_value = cus_3.given_price - cus_3.sales_price;
	
	//printing details
	printf("customer id\t Given price\tProduct price\tSales price\tRemain price\n");
	printf("%d\t %.2f\t %.2f\t %.2f\t %.2f\n",cus_1.customer_id,cus_1.given_price,cus_1.product_price,cus_1.sales_price,cus_1.remain_value);
	printf("%d\t %.2f\t %.2f\t %.2f\t %.2f\n",cus_2.customer_id,cus_2.given_price,cus_1.product_price,cus_2.sales_price,cus_2.remain_value);
	printf("%d\t %.2f\t %.2f\t %.2f\t %.2f\n",cus_3.customer_id,cus_3.given_price,cus_1.product_price,cus_3.sales_price,cus_3.remain_value);
	 
	return 0;	
}//end of main function
