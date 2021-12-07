#include<stdio.h>
main()
{
	int basic,hra,da,gross;
	printf("Enter the basic salary:");
	scanf("%d",&basic);
	if (basic<=10000)
	{
		hra=(20/100)*basic;
	    da=(80/100)*basic;
	    gross=(basic+hra+da);
	    printf("The Gross salary is:%d",gross);
	}
	else if (basic<=20000&&basic>10000)
	{
		hra=(25/100)*basic;
	    da=(90/100)*basic;
	    gross=(basic+hra+da);
	    printf("The Gross salary is:%d",gross);
	}
	else if (basic>20000)
	{
		hra=(30/100)*basic;
		da=(95/100)*basic;
		gross=(basic+hra+da);
	    printf("The Gross salary is:%d",gross);
	}
	
}
