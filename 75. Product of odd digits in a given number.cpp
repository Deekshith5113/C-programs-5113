#include<stdio.h>
main()
{
	int n,x,y,i=1;
	printf("Enter the number:");
	scanf("%d",&n);
	while (n>0)
	{
		x=n%10;
		if (n%2!=0)
		{
			y=x*i;
			i=y;
		}
		n=n/10;
	}
	printf("The product of odd digits of a number is %d",y);
}
