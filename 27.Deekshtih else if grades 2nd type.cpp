#include<stdio.h>
main()
{
	int a;
	printf("Enter the value of a:");
	scanf("%d",&a);
	if(a>90)
	{
		printf("A");
	}
	else if(a>80)
	{
		printf("B");
	}
	else if(a>70)
	{
		printf("C");
	}
	else if(a>60)
	{
		printf("D");
	}
	else
	{
		printf("E");
	}
}
