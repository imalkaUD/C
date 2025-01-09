#include<stdio.h>
int main()
{
	int mark;

	printf("Enter mark:");
	scanf("%d",&mark);


	mark >= 60 ? printf( "Passed\n" ) : printf( "Failed\n" );
	
	return 0;
}




