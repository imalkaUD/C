/*#include<stdio.h>
int main(void)
{
	FILE *cfPtr;
	char ID[10];
	char name[ 30];
	double avgMarks;
	
	cfPtr = fopen(“marks.dat", “r");
	
	if ( cfPtr == NULL)
	{
		printf("File cannot be open");
		return -1;
	}
	
	fscanf(cfPtr, "%s %s %lf", ID, name, avgMarks);
	
	while (!feof(cfPtr))
	{
		printf ("%s %s %lf", ID, name, avgMarks);
		fscanf(cfPtr, "%s %s %lf", ID, name, &avgMarks);
	}	
	
	fclose(cfPtr);
	
	return 0;
}*/
#include <stdio.h>
int main(void)
{
    int number = 10;

    FILE *cfPtr;
    cfPtr = fopen("number.dat", "w");

    if ( cfPtr == NULL)
    {
        printf("Cannot create file\n");
        return -1;
    }
    fprintf(cfPtr, "%d\n", number);
    fclose(cfPtr);  
    return 0;
}


