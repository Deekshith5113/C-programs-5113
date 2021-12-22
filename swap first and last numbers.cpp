#include<stdio.h>
main()
{
	int n,i=1,r=1,x,last,first,y,z;
	printf("Enter the number:");
	scanf("%d",&n);
	last=n%10;
	y=n;
	x=n/10;
	printf("%d\n",last);
	printf("%d\n",x);
	while (x>0)
	{
		z=x%10;
		r=r*10+z;
		x=x/10;
	}
	printf("%d\n",r);
	while (y>10)
	{
		first=y%10;
		y=y/10;
	}
	printf("%d\n",y);
}
