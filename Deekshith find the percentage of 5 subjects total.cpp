#include<stdio.h>
main()
{
	int a,b,c,d,e;
	float percentage,subjecthighest;
	printf("Enter the marks in all 5 subjects a,b,c,d,e:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	printf("Enter the Subject highest");
	scanf("\n%f",&subjecthighest);
	percentage=(((a+b+c+d+e)/5)/subjecthighest)*100;
	if (percentage>=90)
	{
		printf("The grade is A");
	}
	else if (percentage>=80)
	{
		printf("The grade is B");
	}
	else if (percentage>=70)
	{
		printf("The grade is C");
	}
	else if (percentage>=40)
	{
		printf("The grade is D");
	}
	else
	{
		printf("The grade is E");
	}
}
