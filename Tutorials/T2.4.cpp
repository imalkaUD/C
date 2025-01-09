#include<stdio.h>
//Declare the structure
struct item{
	
	int item_no,quantity;
	double price;
	
}item1 , item2;

int main(void)
{
	//Taking item1 details
	printf("Enter item1 item_no:");
	scanf("%d",&item1.item_no);
	
	printf("Enter item1 price:");
	scanf("%lf",&item1.price);
	
	printf("Enter item1 quantity:");
	scanf("%d",&item1.quantity);
	
	//Taking item2 details
	printf("Enter item2 item_no:");
	scanf("%d",&item2.item_no);
	
	printf("Enter item2 price:");
	scanf("%lf",&item2.price);
	
	printf("Enter item_no2 quantity");
	scanf("%d",&item2.quantity);
	
	//printing item details
	printf("item_no\tprice\tquantity\n");
	printf("%d\t%.2f\t%d\n",item1.item_no,item1.price,item1.quantity);
	printf("%d\t%.2f\t%d\n",item2.item_no,item2.price,item2.quantity);
	
	return 0;
		
}


