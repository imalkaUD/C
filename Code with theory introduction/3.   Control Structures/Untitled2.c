
#include <stdio.h>
int main(void)
{

	int no1, no2;
	
	printf( "Enter two integers : " ); 
	scanf( "%d %d", &no1, &no2);       // read two integers
	
	if ( no1 == no2 )
{
    	printf( "%d is equal to %d\n" , no1, no2 );
    	printf( "%s", "Numbers are same " );
}

	

	return 0;
 } // end of main function

