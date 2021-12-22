#include<stdio.h>
main()
{
	int a=0,b=1,c,n;
	printf("Enter the value of n:");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	while (b<(n-a))
	{
		c=a+b;
		a=b;
		printf("%d\t",c);
		b=c;	
	}
}
