#include<stdio.h>
main()
{
	int a,b,c;
	printf("The minimun of three numbers a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c)
	{
		printf("%d is the minimun of all three numbers",a);
	}
	else if(b<a&&b<c)
	{
		printf("%d is the minimun of all three numbers",b);
	}
	else
	{
		printf("%d is the minimun of all three numbers",c);
	}
}
