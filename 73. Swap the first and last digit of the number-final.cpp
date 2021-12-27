//Swap the first and last digit of the number
#include<stdio.h>
main()
{
	int x,y,z=0,f,l,n,a,b,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	l=n%10;
	x=n/10;
	while (x>0)
	{
		y=x%10;
		z=z*10+y;
		x=x/10;
	}
	f=z%10;
	a=z/10;
	while (a>0)
	{
		b=a%10;
		c=c*10+b;
		a=a/10;
	}
	printf("%d%d%d",l,c,f);
}
 
