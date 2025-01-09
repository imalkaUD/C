#include<stdio.h>
int main()
{
	
	int x = 1;
	while(x <= 10)
	{
		if(x == 5)
		{
			continue;
		}
		printf("%d",x);
		x++;
	}

	
	return 0;
}
