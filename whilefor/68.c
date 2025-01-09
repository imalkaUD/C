#include<stdio.h>
int main()
{
	int i,j,k,z=5;
	char letter;
	
	printf("Letter: ");
	scanf("%c",&letter);
	
	for(i=1 ; i<=5 ; i++)//r
	{
		for(j=1 ; j<=z ; j++)
		{
			printf("%c",letter);
			(int)letter--;
			
		}
		printf("\n");
		z--;

	}
	return 0;
}
