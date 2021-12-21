#include<stdio.h>
main()
{
	int n,x,pr=1;
	printf("Enter the number:");
	scanf("%d",&n);
	while (n>0)
	{
		x=n%10;
		pr=pr*x;
		n=n/10;
	}
	printf("The Product of the digits of the number is %d",pr);
}
