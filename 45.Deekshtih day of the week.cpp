#include<stdio.h>
main()
{
	int day;
	printf("Enter the day number:");
	scanf("%d",&day);
	switch (day)
	{
		case 0:printf("SUNDAY");
				break;
		case 1:printf("MONDAY");
				break;
		case 2:printf("TUESDAY");
				break;
		case 3:printf("WEDNESDAY");
				break;
		case 4:printf("THURSDAY");
				break;
		case 5:printf("FRIDAY");
				break;
		case 6:printf("SATURDAY");
				break;
		default:printf("Invalid number");
	}
}
