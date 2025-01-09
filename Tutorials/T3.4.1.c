//3.2
/*Enter the gender and the age of a person from the keyboard and display 
“SeniorMale” or “SeniorFemale”. Age greater than or equal to 65 is taken as 
the condition to determine whether a person is a senior citizen*/

#include<stdio.h>
int main()
{
	//variable declaration
	int age;
	char gender;
	
	//take user inputs
	printf("Enter the age of a person:");
	scanf("%d", &age);
	
	printf("Enter the gender of a person(F/M):");
	scanf(" %c", &gender);
	
	//condition part
	if(age >= 65)
	{
		if(gender == 'M')
		{
			printf("SeniorMale\n");
		}
		else
		{
			printf("SeniorFemale\n");
		}	
	}
	else
	{
		printf("Invalide Age");
	}

	
	return 0;
}//end of main function
