#include<stdio.h>
main()
{
	char grade,E,V,G,A,F;
	printf("Enter the grade alphabet [E,V,G,A or F]:");
	scanf("%c",&grade);
	if (grade=='E')
	{
		printf("Excellent");
	}
	else if (grade=='V')
	{
		printf("Very good");
	}
	else if (grade=='G')
	{
		printf("Good");
	}
	else if (grade=='A')
	{
		printf("Average");
	}
	else if (grade=='F')
	{
		printf("Fail");
	}
}
