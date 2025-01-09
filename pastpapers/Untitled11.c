#include<stdio.h>
int main()
{
	char letter;
	int number = 67;
	
	printf("Enter letter:");
	scanf("%c", &letter);
	
	number = ++letter;
	
	printf("%c\n",number);
	

	
	return 0 ;
}
