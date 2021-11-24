#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the two numbers=",a,b);
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("%d\n%d",a,b);
}
