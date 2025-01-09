#include <stdio.h>
int main(void)
{
	char code1 = 'A';
	int code2 = 66;
	
	switch(code1)
	{
		case 65:printf("Scotland");break;
		case 66:printf("Ireland");break;
		default:printf("Europe");
	}
	
	printf("PALACE");
	
	switch(code2)
	{
		case 'A':printf("England");break;
		case 'B':printf("Wales");break;
		default:printf("Greenland");
		
	}
	
	return 0;
}
