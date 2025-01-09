//3.4.2

/* Enter the gender and the age of a person from the keyboard and display 
“SeniorMale” or “SeniorFemale”. Age greater than or equal to 65 is taken as 
the condition to determine whether a person is a senior citizen*/
#include<stdio.h>
int main()
{
	int age;
	char gender;
	
	printf("Enter the age of a person: ");
	scanf("%d", &age);
	
	printf("Enter the gender of a person(F/M): ");
	scanf(" %c", &gender);
	
	if(age >= 65)
	{
		if(gender == 'M')
		{
			printf("SeniorMale\n");
		}
		else if(gender == 'F')
		{
			printf("SeniorFemale\n");
		}
		else
		{
			printf("Invalid Gender Type\n");
		}
	}

	
	return 0;
}
