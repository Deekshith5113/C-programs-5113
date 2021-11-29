#include<stdio.h>
main()
{
	int a;
	printf("Enter the number:");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The number %d is positive",a);
	}
	else
	{
		printf("The number %d is negative",a);
	}
}
