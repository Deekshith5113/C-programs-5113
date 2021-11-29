#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the numbers a and b:");
	scanf("%d%d",&a,&b);
	if (a>b)
	{
		printf("a is max %d",a);
	}
	else
	{
		printf("b is max %d",b);
	}
}
