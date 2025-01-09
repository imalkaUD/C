//5.1
#include<stdio.h>
int main()
{
	int count = 1;
	int num = 10;
	
	while(count <= 11)
	{
		printf("%d ",num);
		
		num++;
		
		count++;
	}
	return 0;
	
}//end of main function

/*#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter the number: ");
	scanf("%d", &num);
	
	while(num > 0)
	{
		printf("%d\n",num);
		
		printf("Enter the number: ");
		scanf("%d", &num);
	}
	
	return 0;
	
	
}

