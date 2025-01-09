#include<stdio.h>
int main()
{
	int i,j,k;

	for(i=1 ; i<=5; i++)//r
	{
		for(j=1 ; j<=i ; j++)
		{
			for(k=1 ; k<=i ; k++)
			{
				printf("%d",i);
			}
		printf("\n");
		}
	printf("\n");
	}
	return 0;
}
