//t.2.2.b
// print the value 123.4567 with 2 digits pecision
/*Print the value 3.14159 with three digits to the right of the decimal point*/
/*Print the value 333.546372 in a field width of 15 characters with precisions of 
1,2,3,4 and 5*/
#include<stdio.h>
int main()
{ 
	printf("%.2f\n",123.4567);
	printf("%.3f\n",3.14159);
	
	printf("%15.1f\n",333.546372);
	printf("%15.2f\n",333.546372);
	printf("%15.3f\n",333.546372);
	printf("%15.4f\n",333.546372);
	printf("%15.5f\n",333.546372);
	
	return 0;
}



