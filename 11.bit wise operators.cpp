#include<stdio.h>
main()
{
	int a,b,c,d,e;
	printf("Enter the  numbers:");
	scanf("%d%d",&a,&b);
	c=a&b;
	d=a|b;
	e=a^b;
	printf("%d\n%d\n%d",c,d,e);
}
