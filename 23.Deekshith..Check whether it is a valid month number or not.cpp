#include<stdio.h>
main()
{
	int mn;
	printf("Enter the month number:");
	scanf("%d",&mn);
	if(mn>0&&mn<13)
	{
		printf("%d is a valid month number",mn);
	}
	else
	{
		printf("%d is not a valid month number",mn);
	}
}
