#include<stdio.h>
int main()
{
	int num, min=0, count=1;
	while(count <= 10)
	{
		scanf("%d", &num);
		
		count++;
		
		if(num<min)
			min = num;
	}
	
	printf("%d",min);
	
	return 0 ;
}
