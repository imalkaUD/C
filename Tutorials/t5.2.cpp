/*i) while (x > 1){ 			 ii) do {
    	printf(“%d”, x);                printf(“%d”, x);
 		x--; 							x--;
    } 								}while (x > 1);
*/

#include<stdio.h>
int main()
{
	int x = 10;
	
	do
	{
		printf("%d ", x);
		x--;
		
	}while(x > 1);
	
	return 0;
}//end of main function
