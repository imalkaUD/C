#include<stdio.h>
int main()
{
	FILE * ptr;
	
	ptr = fopen("outletOrders.dat","w");
	
	if(ptr == NULL)
	{
		printf("Unable open the file.\n");
		return -1;
	}
	
	int noPizza,traId = 100,count,order;
	int vR=0,vL=0,cR=0,cL=0,sR=0,sL=0;
	char pzType,pzSize;
	
	while(order != -99)
	{
		printf("Enter the type of the pizza(V/C/S): ");
		scanf(" %c", &pzType);
	
		printf("Enter the size of the pizza(R/L): ");
		scanf(" %c", &pzSize);
	
		printf("Enter No of pizza: ");
		scanf("%d", &noPizza);
		
		if(pzType == 'V')	
		{
			if(pzSize == 'R')
			{
				vR = vR + noPizza;
			}	
		}
		else if(pzType == 'V')	
		{
			if(pzSize == 'L')
			{
				vL = vL + noPizza;
			}	
		}
		else if(pzType == 'C')	
		{
			if(pzSize == 'R')
			{
				cR = cR + noPizza;
			}	
		}
		else if(pzType == 'C')	
		{
			if(pzSize == 'L')
			{
				cL = cL + noPizza;
			}	
		}
		else if(pzType == 'S')	
		{
			if(pzSize == 'R')
			{
				sR = sR + noPizza;
			}	
		}
		else if(pzType == 'S')	
		{
			if(pzSize == 'L')
			{
				sL = sL + noPizza;
			}	
		}						
		
		printf("Do u want another order(1 to continue / -99 to exit):");
		scanf("%d", &order);	
		
		fprintf(ptr,"%d  %c  %c  %d\n",traId,pzType,pzSize,noPizza);
		
		traId++;
	}
	
	fprintf(ptr,"Vegi pizza\n");
	
	fprintf(ptr,"\tReular -  %d",vR);
	fprintf(ptr,"\tLarge -  %d",vL);
	
	fprintf(ptr,"\nChicken pizza\n");
	
	fprintf(ptr,"\tReular -  %d",cR);
	fprintf(ptr,"\tLarge -  %d",cL);
	
	fprintf(ptr,"\nSeafood pizza\n");
	
	fprintf(ptr,"\tReular -  %d",sR);
	fprintf(ptr,"\tLarge -  %d",sL);
	
	fclose(ptr);

	
	return 0;
}

