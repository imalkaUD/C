#include<stdio.h>
int main()
{
	//pointer to the file
	FILE * ptr;
	
	//open the file
	ptr = fopen("number.dat","a+");
	
	if(ptr == NULL)
	{
		printf("Unable to open the file.\n");
		return -1;
	}
	
	int num,filenum,flag = 0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	while(fscanf(ptr, "%d ", &filenum) == 1)
	{
		if(num == filenum)
		{
			printf("%d is already in the file\n",num);
			flag = 1;
			break;
		}
	}
	
	if(flag == 0)
	{
		fprintf(ptr,"%d ",num);
		printf("Number is added\n");
		
	}
	
	//closing the file
	fclose(ptr);
	
		
	//open the file
	ptr = fopen("number.dat","r");
	
	if(ptr == NULL)
	{
		printf("Unable to open the file.\n");
		return -1;
	}
	
	while(fscanf(ptr, "%d ", &filenum) == 1)
	{
		printf("%d ",filenum);
	}
	
	//closing the file
	fclose(ptr);	
	
	return 0;
}
