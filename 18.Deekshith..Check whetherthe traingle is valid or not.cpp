#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the angles of a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("The traingle is valid");
	}
	else
	{
		printf("The traingle is not valid");
	}
}
